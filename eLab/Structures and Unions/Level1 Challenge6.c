#include <stdio.h>
#include <string.h>
struct letters{
    char x[1000001];
};
char stack[1000001];
int top=-1;
void pop(){
    top--;}
void push(char n){
    top++;
    stack[top]=n;}
int sizeOfStack(){
    return top+1;}
int main(){
    struct letters story;
    int n,i,words=0;
    scanf("%d",&n);
    while(n--){
        scanf("%s",story.x);
        for(i=0;i<strlen(story.x);i++){
            if(top==-1 || stack[top]!=story.x[i])
                push(story.x[i]);
            else pop();
        }
        if(sizeOfStack()==0)
            words++;
        top=-1;
    }
    printf("%d",words);
	return 0;
}
