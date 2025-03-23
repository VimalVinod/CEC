// Load nominations from LocalStorage
document.addEventListener("DOMContentLoaded", function() {
    updateWinners();
});

// Function to nominate a person
function nominate(category) {
    let name = prompt(`Enter the name you want to nominate for ${category}:`);
    if (!name) return;

    // Get current nominations from LocalStorage
    let nominations = JSON.parse(localStorage.getItem("nominations")) || {};

    // Initialize category if not present
    if (!nominations[category]) {
        nominations[category] = {};
    }

    // Count votes
    nominations[category][name] = (nominations[category][name] || 0) + 1;

    // Save back to LocalStorage
    localStorage.setItem("nominations", JSON.stringify(nominations));

    // Update the displayed winner
    updateWinners();
}

// Function to determine and display the winner
function updateWinners() {
    let nominations = JSON.parse(localStorage.getItem("nominations")) || {};
    
    let categories = ["programmer", "actor", "singer", "allrounder", "kozhi", "designer", "speaker"];

    categories.forEach(category => {
        let winner = "Not decided yet";
        let maxVotes = 0;

        if (nominations[category]) {
            for (let nominee in nominations[category]) {
                if (nominations[category][nominee] > maxVotes) {
                    maxVotes = nominations[category][nominee];
                    winner = nominee;
                }
            }
        }

        document.getElementById(`${category}-winner`).innerText = winner;
    });
}
