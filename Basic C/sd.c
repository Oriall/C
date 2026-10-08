#include <stdio.h>
typedef struct{
    char name[31];
    int win,draw,lose,goals,goal_conceded;
    int point;
}teams;
void insertionSort(teams str[], int n){
    for (int i=0;i<n;i++){
        teams key=str[i];
        int j=i-1;
        while (j>=0 && str[j].point<key.point){
            str[j+1]=str[j];
            j--;
        }
        str[j+1]=key;
    }
}
int main () {
    int n;
    scanf("%d",&n);
    teams team[30]={0};
    for (int i=0;i<n;i++){
        scanf("%s",team[i].name);
    }
    int a,b,x,y;
    for (int i=0;i<n*(n-1)/2;i++){
        scanf("%d %d %d %d",&a,&b,&x,&y);
        if (x>y) {
            team[a-1].point+=3;
            team[a-1].goals+=x;
            team[b-1].goals+=y;
            team[a-1].goal_conceded+=y;
            team[b-1].goal_conceded+=x;
            team[a-1].win+=1;
            team[b-1].lose+=1;
        }
        else if (x==y){
            team[a-1].point+=1;
            team[b-1].point+=1;
            team[a-1].goals+=x;
            team[b-1].goals+=y;
            team[a-1].goal_conceded+=y;
            team[b-1].goal_conceded+=x;
            team[a-1].draw+=1;
            team[b-1].draw+=1;
        }
        else{
            team[b-1].point+=3;
            team[a-1].goals+=x;
            team[b-1].goals+=y;
            team[a-1].goal_conceded+=y;
            team[b-1].goal_conceded+=x;
            team[b-1].win+=1;
            team[a-1].lose+=1;
        }
    }
    insertionSort(team, n);
    for (int i=0;i<3;i++){
        printf("%s %d\n",team[i].name,team[i].point);
    }
    return 0;
}