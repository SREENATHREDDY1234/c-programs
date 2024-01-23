#include<stdio.h>
#include<math.h>
int main(){

    //showing elements of matrix

    // int a[3][3],i,j;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // printf("The resultant martix is \n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }

    // sum of two matrix
    // int a[3][3],i,j,b[3][3],c[3][3];

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix a[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix b[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         c[i][j]=a[i][j]+b[i][j];
    //     }
    // }

    // printf("The resultant martix c is \n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }

    // product of two matrix
    // int a[3][3],i,j,k,b[3][3],c[3][3];

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix a[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix b[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&b[i][j]);
    //     }
    // }

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         c[i][j]=0;
    //         for(k=0;k<3;k++){
    //             c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
    //         }
    //     }
    // }

    // printf("The resultant martix c is \n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }

    // square of matrix
    // int a[3][3],i,j,k,c[3][3];
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Enter matrix a[%d][%d]",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         c[i][j]=0;
    //         for(k=0;k<3;k++){
    //             c[i][j]=c[i][j]+(a[i][k]*a[k][j]);
    //         }
    //     }
    // }
    // printf("The square of matrix a is\n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }

    // sparse of a matrix
    // int a[3][3],i,j,m,n;
    // m=0;
    // n=0;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Matrix[%d][%d] : ",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //         if(a[i][j]==0){
    //             m++;
    //         }
    //         else{
    //             n++;
    //         }
    //     }
    // }

    // printf("The resultant martix is \n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }
        
    // if(m>n){
    //     printf("It is sparse matrix");
    // }
    // else{
    //     printf("It is not a sparse matrix");
    // }

    // transpose of a matrix
    // int a[3][3],i,j,c[3][3];
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Enter the matrix{%d}{%d}",i+1,j+1);
    //         scanf("%d",&a[i][j]);
    //     }
    // }
    // printf("Matrix a is\n");
    //  for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",a[i][j]);
    //     }
    //     printf("\n");
    // }
    // int t;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         c[i][j]=a[j][i];
    //     }
    // }
    // printf("transpose of matrix a is\n");
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("%d\t",c[i][j]);
    //     }
    //     printf("\n");
    // }

    // check for a symmetric matrix
    // int a[3][3],i,j,c[3][3],count;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Enter the matrix{%d}{%d}",i+1,j+1);
    //         scanf("%d",&a[i][j]);
            
    //     }
    // }
    // count=0;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
            
    //         if(a[i][j]==a[j][i]){
    //             count=count+1;
    //         }
            
    //     }
    // }
    //  if(count==9){
    //             printf("It is symmetric matrix");
    //         }
    //         else{
    //             printf("It is not a symmetric matrix");
    //         }

    //Normal and trace of a matrix
    // int a[3][3],i,j,c[3][3],trace;
    // float normal;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         printf("Enter the matrix{%d}{%d}",i+1,j+1);
    //         scanf("%d",&a[i][j]);
            
    //     } 
    // }
    // trace=0;
    // normal=0;
    // for(i=0;i<3;i++){
    //     for(j=0;j<3;j++){
    //         if(i==j){
    //             trace=trace+a[i][j];
    //         }
    //         normal=normal+a[i][j]*a[i][j];
    //     }
    // }
    // normal=sqrt(normal);
    // printf("trace of matrix is %d \n",trace);
    // printf("normal of matrix is %f \n",normal);
    // printf("value of root 3 is %f",sqrt(3));

    int a[3][3],det,i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter matrixa[%d][%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    
    return 0;
}