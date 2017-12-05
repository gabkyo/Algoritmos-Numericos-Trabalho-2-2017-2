### Algoritmos Numericos Trabalho 2 2017/2  
**Implementação**  
-k((∂^2 u)/(∂x^2 )+(∂^2 u)/(∂y^2 ))+β_x (x,y)  ∂u/∂x+β_y (x,y)  ∂u/∂y+γ(x,y)u=f(x,y) em Ω (1)  
Faça um programa computacional modularizado para resolver a equação bidimensional
(1) pelo método das diferenças finitas. O programa principal deve ter a seguinte
estrutura:  
* Um procedimento ou função para leitura dos dados (pode ser feita atraves de
um arquivo de entrada): n, m, x1, xn, y1, ym, numero maximo de iterações
(Nitermax), parâmetro do SOR (w), tolêrancia (etol).  
* Um procedimento ou função para o calculo das funções e/ou constantes conhecidas
(k, Bx(x; y), By(x; y), 
(x; y) e f(x; y)) nos pontos incognitas (xi; yj)  
* Um procedimento ou função para a montagem do sistema esparso. Considere
aproximações de 2a. ordem para discretizar a Eq. (1) por diferenças finitas.,
gerando um sistema com ordem I = n x m.  
* Um procedimento ou função para tratar as condições de contorno. Considere
aproximações de 1a. ordem para tratar derivadas de 
uxo prescrito.  
* Um procedimento ou função para solução do sistema linear resultante pelo
método SOR.  
* Um procedimento ou função para imprimir os resultados em um arquivo de
saida.  
* Um script que plote os graficos a partir do arquivo gerado.  
