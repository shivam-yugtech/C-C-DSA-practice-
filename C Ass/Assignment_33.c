#include<stdio.h>

void sumMatrix()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter numbers in matrix A :");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter numbers in matrix B :");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum Of Matrix a and b is:");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            printf("%d, ",a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}
void productMatrix()
{
    int i,j,k,sum,a[3][3],b[3][3],c[3][3];
    printf("Enter numbers in matrix A :");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }   
    }
    printf("Enter numbers in matrix B :");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            for(k=0,sum=0;k<=2;k++){
                sum=sum+a[i][k] * b[k][j];
            }
            c[i][j]=sum;
        }
    }
    printf("product of a matrix is  ");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}
void transposeMatrix(){
    int i,j,k,temp,a[3][3];
    printf("Enter numbers in matrix A :");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for( i=0,j=1,k=1;k<=3;k++ ){
        temp=a[i][j];
        a[i][j]=a[j][i];
        a[j][i]=temp;
        if(j-i==1)
            j++;
        else    
            i++;
    }
    printf("Transpose of a matrix is  ");
    for( i=0;i<=2;i++ ){
        for( j=0;j<=2;j++){
            printf("%d ",a[i][j]);               //a[j][i]
        }
        printf("\n");
    }
}
void update_scoreBoard(int p1,int p2,int result,int score_board[][4]){
    score_board[p1][p2]=result;
    score_board[p2][p1]=2-result;
}
void dispaly_scoreBoard(int score_board[][4]){
    int i,j;
    printf("\n***** Score Board *****\n");
    for(i=0;i<=3;i++){
        for(j=0;j<=3;j++){
            printf("%d ",score_board[i][j]);
        }
        printf("\n");
    }
}
int get_player_score(int player,int score_board[][4]){
    int i,sum=0;
    for(i=0;i<=3;i++){
        sum=sum+score_board[player][i];
    }
    return sum;
}
int find_winner(int score_board[][4]){
    int player, score, winner, s1;
    player=0;
    winner=player;
    score=get_player_score(player,score_board);
    for(++player;player<=3;player++){
        s1=get_player_score(player,score_board);
        if(score<s1){
            winner=player;
            score=s1;
        }
    }
    return winner;
}
void sort(int a[],int x,int player_index[ ])
{
    int i,r,t;
    for(r=1;r<=x-1;r++)
    {
        for(i=0;i<=x-r-1;i++)
        {
            if(a[i]<a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
                t=player_index[i];
                player_index[i]=player_index[i+1];
                player_index[i+1]=t;
            }
        }
    }
}
void show_rank(int score_board[][4])
{
    int player_score[4],scores[4],player_index[4];
    int i;
    for(i=0;i<=3;i++)
    {
        player_score[i]=get_player_score(i,score_board);
        scores[i]=player_score[i];
        player_index[i]=i;
    }
    sort(scores,4,player_index);
    for(i=0;i<=3;i++)
        printf("%d) %d - score %d\n",i+1,player_index[i],scores[i]);  
}

void chess_match(){
    int score_board[4][4]={0};
    update_scoreBoard(0,1,2,score_board);
    update_scoreBoard(0,2,1,score_board);
    update_scoreBoard(0,3,2,score_board);
    update_scoreBoard(1,2,1,score_board);
    update_scoreBoard(1,3,0,score_board);
    update_scoreBoard(2,3,0,score_board);
    show_rank(score_board); 
}
int main(){
    chess_match();
    printf("\n");
    return 0;
}