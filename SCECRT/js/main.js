// --- Image Carousel ---
const carouselImages = [
    "images/class1.jpeg",
    "images/class2.jpeg",
    "images/class3.jpeg",
];
let carouselIndex = 0; // Changed variable name

const carousel = document.getElementById("carousel-image");
setInterval(() => {
    carouselIndex = (carouselIndex + 1) % carouselImages.length;
    carousel.src = carouselImages[carouselIndex];
}, 3000); // Change every 3 seconds

// --- Class Strength Pie Chart ---
window.onload = function() {
    var ctx = document.getElementById('classStrengthChart')?.getContext('2d');
    if (ctx) {  // Prevent errors if canvas is missing
        new Chart(ctx, {
            type: 'pie',
            data: {
                labels: ['Male', 'Female'],
                datasets: [{
                    label: 'Class Strength',
                    data: [30, 20],
                    backgroundColor: ['#4CAF50', '#2E7D32'],
                    borderColor: ['#388E3C', '#1B5E20'],
                    borderWidth: 1
                }]
            },
            options: {
                responsive: true,
                plugins: {
                    legend: { position: 'top' },
                    tooltip: {
                        callbacks: {
                            label: function(tooltipItem) {
                                return tooltipItem.label + ': ' + tooltipItem.raw;
                            }
                        }
                    }
                }
            }
        });
    }

    // Ensure the gallery appears after the page loads
    setTimeout(() => {
        document.querySelector('.gallery-section').style.display = 'block';
        document.querySelector('.gallery-section').style.opacity = '1';
    }, 800); // Small delay to make transition smoother
};

// --- Image Gallery & Lightbox ---
const galleryImages = [
    "images/gallery1.jpeg",
    "images/gallery2.jpeg",
    "images/gallery3.jpeg",
    "images/gallery4.jpeg"
];

let galleryImageIndex = 0; // Renamed to avoid conflict

function openLightbox(index) {
    galleryImageIndex = index;
    document.getElementById("lightbox").style.display = "flex";
    document.getElementById("lightbox-img").src = galleryImages[galleryImageIndex];
}

function closeLightbox() {
    document.getElementById("lightbox").style.display = "none";
}

function changeLightbox(direction) {
    galleryImageIndex = (galleryImageIndex + direction + galleryImages.length) % galleryImages.length;
    document.getElementById("lightbox-img").src = galleryImages[galleryImageIndex];
}
