function [I,f]=esparso(n,x1,xn,m,y1,ym) 
  #gera sistema I n*m com abcdef
  #olhar slide de PVC para referencia porque e muita formula
  I=zeros(n,m);
  fl=zeros(n,1);
  for i=1:n
  for j=1:m
    [a,b,c,d,e,f]=constantes(x1,xn,n,y1,ym,m,i,j);
    if(i==j)
    I(i,j)=a;
    elseif(i-1==j)
    I(i,j)=b;
    elseif(i==j-1)
    I(i,j)=c;
    elseif(j==i-3)
    I(i,j)=d;
    elseif(j-3==i)
    I(i,j)=e;
    endif
  end
  fl(i)=f;
  end
  #sei la
  end function