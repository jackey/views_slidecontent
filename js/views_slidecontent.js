Drupal.behaviors.viewsSlideContent = function (context) {
  $('.views-slide-content').vTicker({
    speed: 500,
	pause: 3000,
	showItems: 3,
	animation: 'fade',
	mousePause: false,
	height: 0,
	direction: 'up'
  });
}