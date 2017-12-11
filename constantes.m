function [a,b,c,d,e,f]=constantes(x1,xn,n,y1,ym,m,i,j)
#tem que ser mudado toda hora pra se encaixar no problema
#calcula k Bx By Y e f que variam problema a problema
k=0; 
Bx=0;
By=0;
Y=0;
f=0;
g=0;
#olhar slide de PVC para referencia porque e muita formula
hx=(xn-x1)/(n-1);
hy=(ym-y1)/(m-1);
xi=x1+(i-1)*hx;
yj=y1+(j-1)*hy;
a=Y+2*k*(1/hx**2 +1/hy**2);
b=(-k/hx**2)-Bx/(2*hx);
c=(-k/hx**2)+By/(2*hx);
d=(-k/hy**2)-By/(2*hy);
e=(-k/hy**2)+By/(2*hy);
#a b c d e f para posicao (i,j)
endfunction

