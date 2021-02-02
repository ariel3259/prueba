#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>
#include <locale.h>
#include<string.h>
//registro
void c();
void i_n();
void i_a();
void i_e();
void i_p();
void i_u();
void i_c();
void m();
void verdad();
struct var{
char nombre[50];
 char apellido[50];
 int edad;
 char pais[50];
 char usuario[50];
 char contrasenia[50];
 char opc[10];
 int opc2;
};
struct var var1;
void c(){
    printf("\tRegistrarse\n");
    i_n();
    i_a();
    i_e();
    i_p();
    i_u();
    i_c();
    m();
}
void i_n(){
    printf("Ingrese su nombre:\n");
    scanf("%s",&var1.nombre);
}
void i_a(){
    printf("\n Ingrese su apellido:\n");
    scanf("%s",&var1.nombre);
}
void i_e(){
    printf("\n Ingrese su edad:\n");
    scanf("%i",&var1.edad);
}
void i_p(){
    printf("\nIngrese su pais:\n");
    scanf("%s",&var1.apellido);
}
void i_u(){
    printf("\nIngrese su nombre de usuario:\n");
    scanf("%s",&var1.usuario);
}
void i_c(){
    printf("\nIngrese su contrasenia:\n");
    scanf("%s",&var1.contrasenia);
}
void m(){
    printf("\nDejame procesarlo...\n");
    printf("Tu nombre es:%s\n",var1.nombre);
    printf("Tu apellido es:%s\n",var1.apellido);
    printf("Tu edad es:%i\n",var1.edad);
    printf("Tu pais es:%s\n",var1.pais);
    printf("Tu apodo es:%s\n",var1.usuario);
    printf("Y tu contrasenia es:%s\n",var1.contrasenia);
    printf("Es eso cierto?\n");
    scanf("%s",&var1.opc);
    if(strcmp(var1.opc,"si")==0){
         printf("\nBien, su cuenta fue creada");
        
    }
    else{
       verdad();
    }
}
void verdad(){
 printf("\nEn que se equivoco?\n""1.Nombre\n""2.Apellido\n""3.Edad\n""4.Pais\n""5.Apodo\n""6.Contraseña");
 scanf("%i",&var1.opc2);
 switch(var1.opc2){
    case 1:
    i_n();
    printf("\nBien, su cuenta fue creada");
    break;
    case 2:
    i_a();
    printf("\nBien, su cuenta fue creada");
    break;
    case 3:
    i_e();
    printf("\nBien, su cuenta fue creada");
    break;
    case 4:
    i_p();
    printf("\nBien, su cuenta fue creada");
    break;
    case 5:
    i_u();
    printf("\nBien, su cuenta fue creada");
    break;
    case 6:
    i_c();
    printf("\nBien, su cuenta fue creada");
    break;
    default:
    printf("\nOpcion invalida");
    break;
}
}
int main(int argc, char const *argv[])
{setlocale(LC_ALL,"");
    c();
    system("pause");
    return 0;
}