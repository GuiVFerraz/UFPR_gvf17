//Lançamento Horizontal

#include <stdio.h>
#include <math.h>

int main(){
  double g;//      [ m/s^2 ] aceleração da gravidade
  double dt;//     [   s   ] diferença de tempo
  double t;//      [   s   ] tempo
  double rx;//     [   m   ] distância horizontal
  double ry;//     [   m   ] distância vertical
  double v0;//     [  m/s  ] velocidade resultante
  double vx;//     [  m/s  ] velocidade horizontal
  double vy;//     [  m/s  ] velocidade vertical
  double ax;//     [ m/s^2 ] aceleração horizontal
  double ay;//     [ m/s^2 ] aceleração vertical
  double theta; // [  rad  ] ângulo de lançamento

  g  = 10;
  dt = 0.001;
  rx = 0;
  ry = 0;
  v0 = 100;
  theta = 75;

  vx = v0 * cos( theta * 3.141592 / 180.0 );
  vy = v0 * sin( theta * 3.141592 / 180.0 );

  for( t=0; t<=50; t=t+dt ){
    printf("%g %g %g %g %g \n", t, rx, ry, vx, vy);
    if ( ry < 0 ) break;
    ax = 0.0;
    ay = -g;
    rx = rx + vx * dt;
    ry = ry + vy * dt;
    vx = vx + ax * dt;
    vy = vy + ay * dt;
      
  }
  return 0;
}
