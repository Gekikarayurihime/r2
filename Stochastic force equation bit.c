#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Stochastic Force equation: Test using arbitrary values
int main()
{
    int T=300; //T=temperature(K), Z=Friction coefficient, n=Random Number vector in 3D??1D???
    double drdt,KB=pow(1.38064852,-23),pi=3.141592653589793,t,eta=pow(8.9,-4),a=pow(10,-8),Z,n=0.1; //eta=scalar viscosity(Pa), a=Brownian particle radius(m)

    Z=1/(6*pi*eta*a);

    for(t=0.0001;t<=0.01;t+=0.0001)
    {
        drdt=sqrt((6*KB*T)/(Z*t))*n;
        printf("%lf\t %.15lf\n",t,drdt);
    }

    return 0;

}
