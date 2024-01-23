// 2b)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float l,b;
//     scanf("%f %f",&l,&b);
//     printf("area is %f\n",l*b);
//     printf("perimeter is %f\n",2*(l+b));
//     printf("diagonal is %f",sqrt((l*l)+(b*b)));
// }

// // 2b)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float l,b;
//     scanf("%f",&l);
//     printf("area is %f\n",l*l);
//     printf("perimeter is %f\n",4*l);
//     printf("diagonal is %f",sqrt(2)*(l));
// }

// //2c)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float r,h;
//     scanf("%f %f",&r,&h);
//     printf("area is %f\n",2*3.14*r*(r+h));
//     printf("volume is %f\n",3.14*r*r*h);
// }

// //3a)
// #include<stdio.h>
// int main(){
//     float a,u,t,t1,t2,i,s;
//     printf("Enter value of a,u,t,t1,t2 in order :");
//     scanf("%f %f %f %f %f",&a,&u,&t,&t1,&t2);
//     for(i=t1;i<=t2;i=i+t){
//         s = (u*i)+(0.5*a*i*i);
//         printf("%f\n",s);
//     }
//     return 0;
// }

// //3b)
// #include<stdio.h>
// int main(){
//     char o;
//     int a,b;
//     printf("Enter operator : ");
//     scanf("%c",&o);
//     printf("Enter the numbers :");
//     scanf("%d %d",&a,&b);
//     switch(o){
//         case'+':
//             printf("addition is %d",a+b);
//             break;
//         case'-':
//             printf("subraction if %d",a-b);
//             break;
//         case'*':
//             printf("mul is %d",a*b);
//             break;
//         case'%':
//             printf("mod is %d",a%b);
//             break;
//         case'/':
//             printf("div is %f",a/b);
//             break;
//         default:
//             printf("invalid operator");
//     }
//     return 0;
// }

// // 4a)
// #include<stdio.h>
// int main(){
//     int n;
//     int sum = 0;
//     scanf("%d",&n);
//     while(n>0){
//         int a = n%10;
//         sum += a;
//         n = n/10;
//     }
//     printf("sum is %d",sum);
//     return 0;
// }

// // 4b)
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int a=0;
//     int b=1;
//     int sum=0;
//     while(n--){
//         printf("%d ",a);
//         sum = a+b;
//         a = b;
//         b = sum;
//     }
//     return 0;
// }

// // 4c)
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the upper range :");
//     scanf("%d",&n);
//     for(int i=2;i<=n;i++){
//         int count = 0;
//         for(int j=1;j<=i;j++){
//             if(i%j==0){
//                 count++;
//             }
//         }
//         if(count == 2){
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }

// // 5a)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int term,step,number;
//     float sum = 1;
//     scanf("%d",&number);
//     for(term=1,step=2;step<=10;term++,step=step+2){
//         int fact = 1;
//         for(int i=1;i<=step;i++){
//             fact = fact*i;
//         }
//         sum = sum + pow(-1,term)*(pow(number,step)/fact);
//     }
//     printf("sum is %f",sum);
//     return 0;
// }

// // 5b)
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     int d = sqrt((b*b)-(4*a*c));
//     if(a>0){
//         if(d>0){
//             float r1 = (-b + d)/(2*a);
//             float r2 = (-b - d)/(2*a);
//             printf("%f %f",r1,r2);
//         }
//         else{
//             printf("roots are imaginary");
//         }
//     }
//     else{
//         printf("enter valid equation");
//     }
//     return 0;
// }

// // 6a)
// without recursion
// #include<stdio.h>
// int factorial(int n){
//     int fact = 1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("factorial of %d is %d",n,factorial(n));
//     return 0;
// }

// with recursion
// #include<stdio.h>
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*factorial(n-1);
//     }
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     printf("factorial of %d is %d",n,factorial(n));
//     return 0;
// }

// 6b)
//without recursion
// #include<stdio.h>
// int gcd(int a,int b){
//     while(b!=0){
//         int temp = b;
//         b = a%b;
//         a = temp;
//     }
//     return a;
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("gcd is %d",gcd(a,b));
//     return 0;
// }

//with recursion
// #include<stdio.h>
// int gcd(int a,int b){
//     if(b == 0){
//         return a;
//     }
//     else{
//         return gcd(b,a%b);
//     }
// }
// int main(){
//     int a,b;
//     scanf("%d %d",&a,&b);
//     printf("gcd is %d",gcd(a,b));
//     return 0;
// }

// 7a)
// #include<stdio.h>
// int main(){
//     int n;
//     int a[100];
//     int largest,smallest;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     largest=a[0];
//     smallest=a[0];
//     for(int i=0;i<n;i++){
//         if(smallest > a[i]){
//             smallest = a[i];
//         }
//         if(largest < a[i]){
//             largest = a[i];
//         }
//     }
//     printf("largest is %d\nsmallest is %d",largest,smallest);
//     return 0;
// }

// 7b)
//addition of matrix
// #include<stdio.h>
// int main(){
//     int a[3][3],b[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             printf("%d\t",a[i][j]+b[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main(){
//     char s[100];
//     scanf("%s",s);
//     int f = 0;
//     int l=strlen(s)-1;
//     while(f<l){
//         if(s[f]!=s[l]){
//             printf("not a palindrome");
//             exit(0);
//         }
//         f++;
//         l--;
//     }
//     printf("it is a palindrome");
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[100],t[20];
//     char *found;
//     gets(s);
//     gets(t);
//     found = strstr(s,t);
//     if(found){
//         printf("postion is %d",found-s);
//     }
//     else{
//         printf("-1");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char s[1000];
//     int words=0,characters=0,lines=0;
//     scanf("%[^~]",s);
//     for(int i=0;s[i]!='\0';i++){
//         if(s[i]==' '){
//             words++;
//         }
//         else if(s[i]=='\n'){
//             words++;
//             lines++;
//         }
//         else{
//             characters++;
//         }
//     }
//     printf("no of characters is %d\n",characters);
//     printf("no of words is %d\n",words);
//     printf("no of lines is %d\n",lines);
//     return 0;
// }

// #include<stdio.h>
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact *= i;
//     }
//     return fact;
// }
// int combination(int n,int r){
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
// int main(){
//     int n;
//     scanf("%d",&n);
    
//     for(int i=0;i<n;i++){
//         for(int k=0;k<n-i-1;k++){
//             printf(" ");
//         }
//         for(int j=0;j<=i;j++){
//             printf("%d ",combination(i,j));
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
    char r[30];
    int a[30];
    int sum = 0;
    for(int i=0;r[i]!='\0';i++){
        switch(r[i]){
            case 'I':a[i]=1;break;
            case 'V':a[i]=5;break;
            case 'X':a[i]=10;break;
            case 'L':a[i]=50;break;
            case 'C':a[i]=100;break;
            case 'D':a[i]=500;break;
            case 'M':a[i]=1000;break;
        }
    }
    
}