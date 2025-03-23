// PIN Unlock System
const correctPin = "1234"; 

function checkPin() {
    const enteredPin = document.getElementById("pin-input").value;
    if (enteredPin === correctPin) {
        document.getElementById("pin-container").style.display = "none";
        document.getElementById("content").style.display = "block";
    } else {
        alert("Incorrect PIN! Try again.");
    }
}

// Go back function
function goBack() {
    window.history.back();
}

// Sticky Notes System
function getRandomColor() {
    const colors = ["#FFEB3B", "#FFC107", "#FF9800", "#FF5722", "#F44336", "#E91E63", "#9C27B0", "#3F51B5", "#2196F3", "#4CAF50"];
    return colors[Math.floor(Math.random() * colors.length)];
}

function getRandomPosition() {
    return {
        x: Math.random() * (window.innerWidth - 220),
        y: Math.random() * (window.innerHeight - 200)
    };
}

// Function to make notes draggable
function makeDraggable(note) {
    let offsetX, offsetY, isDragging = false;

    note.addEventListener("mousedown", startDrag);
    note.addEventListener("touchstart", startDrag);

    function startDrag(e) {
        isDragging = true;
        let event = e.type === "touchstart" ? e.touches[0] : e;
        offsetX = event.clientX - note.getBoundingClientRect().left;
        offsetY = event.clientY - note.getBoundingClientRect().top;

        document.addEventListener("mousemove", drag);
        document.addEventListener("touchmove", drag);
        document.addEventListener("mouseup", stopDrag);
        document.addEventListener("touchend", stopDrag);
    }

    function drag(e) {
        if (!isDragging) return;
        let event = e.type === "touchmove" ? e.touches[0] : e;
        note.style.left = event.clientX - offsetX + "px";
        note.style.top = event.clientY - offsetY + "px";
    }

    function stopDrag() {
        isDragging = false;
        document.removeEventListener("mousemove", drag);
        document.removeEventListener("touchmove", drag);
        document.removeEventListener("mouseup", stopDrag);
        document.removeEventListener("touchend", stopDrag);
    }
}

// Function to add a sticky note
function addStickyNote() {
    let userName = document.getElementById("user-name").value.trim();
    let memoryText = document.getElementById("memory-text").value.trim();

    if (userName === "" || memoryText === "") {
        alert("Please enter your name and memory.");
        return;
    }

    let stickyContainer = document.getElementById("sticky-container");

    let note = document.createElement("div");
    note.classList.add("sticky-note");

    // Set a random position and background color
    let { x, y } = getRandomPosition();
    note.style.left = `${x}px`;
    note.style.top = `${y}px`;
    note.style.backgroundColor = getRandomColor();

    // Set note content
    note.innerHTML = `
        <p>${memoryText}</p>
        <p class="signature">- ${userName}</p>
        <button class="delete-btn" onclick="deleteNote(this)">🗑️</button>
    `;

    // Make it draggable
    makeDraggable(note);

    stickyContainer.appendChild(note);

    // Clear inputs
    document.getElementById("user-name").value = "";
    document.getElementById("memory-text").value = "";
}

// Function to delete sticky notes
function deleteNote(button) {
    button.parentElement.remove();
}

// Create Floating Hearts
function createLoveHeart() {
    const heart = document.createElement("div");
    heart.classList.add("heart");
    heart.innerHTML = "❤️";
    heart.style.left = `${Math.random() * 100}vw`;
    heart.style.animationDuration = `${Math.random() * 3 + 5}s`;

    document.body.appendChild(heart);
    setTimeout(() => {
        heart.remove();
    }, 5000);
}

setInterval(createLoveHeart, 700);
document.addEventListener("DOMContentLoaded", loadStickyNotes);

// Function to add a sticky note and store it
function addStickyNote() {
    let userName = document.getElementById("user-name").value.trim();
    let memoryText = document.getElementById("memory-text").value.trim();

    if (memoryText === "" || userName === "") {
        alert("Please enter your name and memory.");
        return;
    }

    let note = createStickyNote(userName, memoryText);

    document.getElementById("sticky-container").appendChild(note);
    saveNoteToStorage(userName, memoryText);

    document.getElementById("user-name").value = "";
    document.getElementById("memory-text").value = "";
}

// Function to create a sticky note element
function createStickyNote(userName, memoryText) {
    let note = document.createElement("div");
    note.classList.add("sticky-note");
    note.style.left = Math.random() * 50 + "%";
    note.style.top = Math.random() * 50 + "%";
    note.style.backgroundColor = getRandomColor();

    note.innerHTML = `
        <p>${memoryText}</p>
        <p class="signature">- ${userName}</p>
        <button class="delete-btn" onclick="deleteNote(this, '${userName}', '${memoryText}')">🗑️</button>
    `;

    makeDraggable(note);
    return note;
}

// Function to save a note in localStorage
function saveNoteToStorage(userName, memoryText) {
    let notes = JSON.parse(localStorage.getItem("stickyNotes")) || [];
    notes.push({ userName, memoryText });
    localStorage.setItem("stickyNotes", JSON.stringify(notes));
}

// Function to load notes from localStorage
function loadStickyNotes() {
    let notes = JSON.parse(localStorage.getItem("stickyNotes")) || [];
    notes.forEach(note => {
        let noteElement = createStickyNote(note.userName, note.memoryText);
        document.getElementById("sticky-container").appendChild(noteElement);
    });
}

// Function to delete a sticky note from the UI and storage
function deleteNote(button, userName, memoryText) {
    let note = button.parentElement;
    note.remove();

    let notes = JSON.parse(localStorage.getItem("stickyNotes")) || [];
    notes = notes.filter(n => n.userName !== userName || n.memoryText !== memoryText);
    localStorage.setItem("stickyNotes", JSON.stringify(notes));
}
