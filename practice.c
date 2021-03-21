#include<stdio.h>

void Display(int n)
{
    printf("%d",n);
}

int decimaltooctal(int decimal)
{
    int rem,octal=0,weight=1;
    do
    {
    rem=decimal%8;
    decimal=decimal/8;
    octal=octal+rem*weight;
    weight=weight*10;}while(decimal != 0);

return octal;
}

int octaltobinary(int octal)
{
    int rem,binary=0,weight=1;
    do
    {
    rem=octal%2;
    octal=octal/2;
    binary=binary+rem*weight;
    weight=weight*10;}while(octal != 0);

return binary;
}

int octaltodecimal(int octal)
{
    int rem,decimal=0,weight=1,k;
    k=octaltobinary(octal);
    while(k != 0){
    rem=k%10;

    decimal=decimal+rem*weight;
    k=k/10;

    weight=weight*2;}

return decimal;

}
int octaltohexa(int octal)
{
    int rem,hexa=0,weight=1;

    while(octal != 0){
    rem=octal%16;
    octal=octal/16;
    hexa=hexa+rem*weight;
    weight=weight*10;}

return hexa;

}
int decimaltohexa(int decimal)
{
    int rem,hexa=0,weight=1;
    do
    {
    rem=decimal%16;
    decimal=decimal/16;
    hexa=hexa+rem*weight;
    weight=weight*10;}while(decimal != 0);

return hexa;
}
int decimaltobinary(int decimal)
{
    int rem,binary=0,weight=1;
    do
    {
    rem=decimal%2;
    decimal=decimal/2;
    binary=binary+rem*weight;
    weight=weight*10;}while(decimal != 0);

return binary;
}
int binarytodecimal(int binary)
{
    int rem,decimal=0,weight=1;

    while(binary != 0){
    rem=binary%10;
    binary=binary/10;
    decimal=decimal+rem*weight;

    weight=weight*2;}

return decimal;
}

int binarytooctal(int binary)
{
    int rem,octal=0,weight=1,k;
    k=binarytodecimal(binary);
    while(k != 0){
    rem=k%8;
    k=k/8;
    octal=octal+rem*weight;

    weight=weight*10;}

return octal;
}

int binarytohexa(int binary)
{
    int rem,hexa=0,weight=1,k;
    k=binarytodecimal(binary);
    while(k != 0){
    rem=k%16;
    k=k/16;
    hexa=hexa+rem*weight;

    weight=weight*10;}

return hexa;
}

int hexatobinary(int hexa)
{
    int rem,binary=0,weight=1;
    while(hexa != 0)
    {
    rem=hexa%2;
    hexa=hexa/2;
    binary=binary+rem*weight;
    weight=weight*10;}

    return binary;
}

int main()
{
   printf("%d",decimaltooctal(36));
   printf("\n");
   printf("%d",decimaltohexa(36));
      printf("\n");
   printf("%d",decimaltobinary(36));
   printf("\n");
   Display(binarytodecimal(100100));
   printf("\n");
   Display(binarytooctal(100100));
   printf("\n");
   Display(binarytohexa(100100));
   printf("\n");
   Display(octaltobinary(44));
    printf("\n");
   Display(octaltodecimal(36));
   printf("\n");
   Display(octaltohexa(36));
   printf("\n");
   Display(hexatobinary(15));
   return 0;
}
