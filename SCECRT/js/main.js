// Carousel Images
const carouselImages = [
    "images/class1.jpeg",
    "images/class2.jpeg",
    "images/class3.jpeg",
];
let currentImageIndex = 0;

const carousel = document.getElementById("carousel-image");
setInterval(() => {
    currentImageIndex = (currentImageIndex + 1) % carouselImages.length;
    carousel.src = carouselImages[currentImageIndex];
}, 3000); // Change every 3 seconds

/// File: js/main.js
window.onload = function() {
    var ctx = document.getElementById('classStrengthChart').getContext('2d');
    var classStrengthChart = new Chart(ctx, {
        type: 'pie', // Correct chart type (pie chart)
        data: {
            labels: ['Male', 'Female'], // Class categories
            datasets: [{
                label: 'Class Strength',
                data: [30, 20], // Data points, e.g., 30 males and 20 females
                backgroundColor: ['#4CAF50', '#2E7D32'], // Different color for each segment
                borderColor: ['#388E3C', '#1B5E20'], // Border color for each segment
                borderWidth: 1
            }]
        },
        options: {
            responsive: true,
            plugins: {
                legend: {
                    position: 'top', // Position of the legend
                },
                tooltip: {
                    callbacks: {
                        label: function(tooltipItem) {
                            return tooltipItem.label + ': ' + tooltipItem.raw; // Customizing tooltip
                        }
                    }
                }
            }
        }
    });
};

