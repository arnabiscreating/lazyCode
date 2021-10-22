const menu = document.querySelector('.nav-child2');
const menuToggle = document.querySelector('.nav-child3');
const menuToggleText = document.querySelector('.nav-child3 a');

menuToggle.addEventListener('click', function() {
    menu.classList.toggle('open');
    
    if (menu.classList.contains('open')) {
        menuToggleText.innerHTML = `closeMenu()<span class="menu-state">×</span>`;
    } else {
        menuToggleText.innerHTML = `closeMenu()<span class="menu-state">>_</span>`;
    }
});