#include<stdio.h>
#include<string.h>

int main(){
int a,b,c;
int a1,b1,c1;
int a2,b2,c2;
int a3,b3,c3;
c1 = a1+b1;
c = a*b;
c2 = a2*b2^-1;
c3 = a3+b3;

char f0[10];

printf("Ketik help, kali, bagi, tambah, atau kurang\n");
printf("use Lower case letters\n");
printf("Command:");
scanf("%s", f0);

if(strcmp(f0,"help") == 0){
printf("Berikut adalah function yang tersedia:\n");
printf("help\n");
printf("kali\n");
printf("tambah\n");
printf("bagi\n");
printf("kurang\n");
}

else{
printf("Did you mean 'help' or \n");
}


if(strcmp(f0,"kali") == 0){
printf("Fungsi Perkalian 2 nilai\n");
printf("Masukkan nilai a = ");
scanf("%i",&a);
printf("Masukkan nilai b = ");
scanf("%i",&b);
printf("hasil kali = %i",c);
}

else{
printf("Did you mean 'kali' or \n");
}

if(strcmp(f0,"tambah") == 0){
printf("Fungsi Penambahan 2 nilai\n");
printf("Masukkan nilai a = ");
scanf("%i",&a1);
printf("Masukkan nilai b = ");
scanf("%i",&b1);
printf("hasil tambah = %i",c1);
}

else{
printf("Did you mean 'tambah' or \n");
}

if(strcmp(f0,"kurang") == 0){
printf("Fungsi Pengurangan a-b 2 nilai\n");
printf("Masukkan nilai a = ");
scanf("%i",&a2);
printf("Masukkan nilai b = ");
scanf("%i",&b2);
printf("hasil pengurangan = %i",c2);
}

else{
printf("Did you mean 'kurang' or \n");
}

if(strcmp(f0,"bagi") == 0){
printf("Fungsi Pembagian 2 a/b nilai\n");
printf("Masukkan nilai a = ");
scanf("%i",&a3);
printf("Masukkan nilai b = ");
scanf("%i",&b3);
printf("hasil bagi = %i",c3);
}

else{
printf("Did you mean 'bagi'\n");

}
return 0;
}
