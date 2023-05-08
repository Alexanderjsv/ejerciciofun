#include <stdio.h>
#include <math.h>
float pi=3.14;

float pericirc(float radio){
    float perimetro,diametro;
    diametro=radio*2;
    perimetro=diametro*pi;
    printf("El perimetro es %2.f\n",perimetro);
}

float areacurc(float radio){
    float area;
    area=pi*pow(radio,2);
    printf("El area es %2.f\n",area);
}

float areatriang(float base, float altura){
    float area;
    area=base*altura;
    printf("El area es: %2.f\n",area);
}
float peritriangulo(float lado1, float lado2, float lado3){
    float perimetro;
    perimetro=lado1+lado2+lado3;
    printf("El perimetro es %2.f\n",perimetro);
}

float perirectangulo(float base, float altura){
    float perimetro;
    perimetro=base+base+altura+altura;
    printf("El perimetro es %2.f\n",perimetro);
}
float arearectangulo(float base, float altura){
    float area;
    area=base*altura;
    printf("El area es: %2.f\n",area);
}

float pericuadrado(float lado){
    float perimetro;
    perimetro=lado+lado+lado+lado;
    printf("El perimetro es %2.f\n",perimetro);
}
float areacuadrado(float lado){
    float area;
    area=pow(lado,2);
    printf("El area es: %2.f\n",area);
}

float peritrapecio(float lado1,float lado2,float lado3,float lado4){
    float perimetro;
    perimetro=lado1+lado2+lado3+lado4;
    printf("El perimetro es %2.f\n",perimetro);
}
float areatrapecio(float base1,float base2,float altura){
    float area;
    area=((base1+base2)*altura)/2;
    printf("El area es: %2.f\n",area);
}

int main(){
  int op,opcir,optri,oprec,opcuad,optra;
  float diametrocir,radiocir,basetri,alturatri,ladotri1,ladotri2,ladotri3,baserec,alturarec,ladocuad,ladotrape1,ladotrape2,ladotrape3,ladotrape4,baseMatra,basemtra,alturatra;
  do{
     printf("Seleccione la figura a realizar\n1.Circulo\n2.Triangulo\n3.Rectangulo\n4.Cuadrado\n5.trapecio\n6.Salir\n");
  scanf("%d",&op);
  switch(op){
    case 1:
      printf("Desear sacar el 1.area o 2.perimetro de su figura\n");
      scanf("%d",&opcir);
      switch(opcir){
        case 1:
          printf("Ingrese el radio del circulo\n");
          scanf("%f",&radiocir);
          areacurc(radiocir);
        break;
        case 2:
          printf("Ingrese el radio del circulo\n");
          scanf("%f",&radiocir);
          pericirc(radiocir);
        break;
      }
    break;
      case 2:
      printf("Desear sacar el 1.area o 2.perimetro de su figura\n");
      scanf("%d",&optri);
      switch(optri){
        case 1:
          printf("Ingrese base\n");
          scanf("%f",&basetri);
          printf("Ingrese altura\n");
          scanf("%f",&alturatri);
          areatriang(basetri,alturatri);
        break;
        case 2:
          printf("Ingrese el lado 1\n");
          scanf("%f",&ladotri1);
          printf("Ingrese el lado 2\n");
          scanf("%f",&ladotri2);
          printf("Ingrese el lado 3\n");
          scanf("%f",&ladotri3);
          peritriangulo(ladotri1,ladotri2,ladotri3);
        break;
      }
    break;
    case 3:
      printf("Desear sacar el 1.area o 2.perimetro de su figura\n");
      scanf("%d",&oprec);
      switch(oprec){
        case 1:
          printf("Ingrese base\n");
          scanf("%f",&baserec);
          printf("Ingrese altura\n");
          scanf("%f",&alturarec);
          arearectangulo(baserec,alturarec);
        break;
        case 2:
          printf("Ingrese base\n");
          scanf("%f",&baserec);
          printf("Ingrese altura\n");
          scanf("%f",&alturarec);
          perirectangulo(baserec,alturarec);
        break;
      }
    break;
    case 4:
      printf("Desear sacar el 1.area o 2.perimetro de su figura\n");
      scanf("%d",&opcuad);
      switch(opcuad){
        case 1:
          printf("Ingrese el lado del cuadrado\n");
          scanf("%f",&ladocuad);
          areacuadrado(ladocuad);
        break;
        case 2:
          printf("Ingrese el lado del cuadrado\n");
          scanf("%f",&ladocuad);
          pericuadrado(ladocuad);
        break;
      }
    break;
    case 5:
      printf("Desear sacar el 1.area o 2.perimetro de su figura\n");
      scanf("%d",&optra);
      switch(optra){
        case 1:
          printf("Ingrese base mayor\n");
          scanf("%f",&baseMatra);
          printf("Ingrese base menor\n");
          scanf("%f",&basemtra);
          printf("Ingrese altura\n");
          scanf("%f",&alturatra);
          areatrapecio(baseMatra,basemtra,alturatra);
        break;
        case 2:
          printf("Ingrese el lado 1\n");
          scanf("%f",&ladotrape1);
          printf("Ingrese el lado 2\n");
          scanf("%f",&ladotrape2);
          printf("Ingrese el lado 3\n");
          scanf("%f",&ladotrape3);
          printf("Ingrese el lado 4\n");
          scanf("%f",&ladotrape4);
          peritrapecio(ladotrape1, ladotrape2, ladotrape3, ladotrape4);
        break;
      }
    break;
    case 6:
    printf("Has salido del programa\n");
    break;
  }
  }while(op!=6);
 
  return 0;
}