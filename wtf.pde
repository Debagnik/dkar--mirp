int displayWidth=800, displayHeight=800;

float MAX_VELOCITY = 10;

float bgColor = 0;

float gravity = 0.98;
float ballX, ballY;
float ballVx = 1, ballVy = 1;
float ballRadius = 30;
color ballColor = color(255, 255, 20, 160);

float restitutionCoeff = 1;

char UP = 'w', LEFT = 'a', RIGHT = 'd';
boolean up, left, right;

boolean keys[] = new boolean [4];

void setup() {
  size(displayWidth, displayHeight);
  ballX=displayWidth/2;
  ballY=displayHeight/2;
  ballVx = 10;
  ballVy = 10;
}

void draw() {
  background(bgColor);
  detectKeys();
  drawBall();
  updateBallVelocity();
  updateBallPosition();
  resolveCollisions();
}

void drawBall() {
  fill(ballColor);
  ellipse(ballX, ballY, 2*ballRadius, 2*ballRadius);
}