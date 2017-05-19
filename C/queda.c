#include <stdio.h>

int main(){
  double g;//  [ m/s^2 ] aceleração da gravidade
  double dt;// [   s   ] diferença de tempo
  double t;//  [   s   ] tempo
  double x;//  [   m   ] distância
  double v;//  [  m/s  ] velocidade
  double a;//  [ m/s^2 ] aceleração

  g  = 10;
  dt = 0.0001;
  x  = 0;
  v  = 0;

  for( t=0; t<=5; t=t+dt ){
    printf("%g %g %g \n", t, x, v);
    a = g;          // hisira do problema
    x = x + v * dt; // método de Euler
    v = v + a * dt;
  }
  return 0;
}
