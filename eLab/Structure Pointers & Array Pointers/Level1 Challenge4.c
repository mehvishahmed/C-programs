#include <stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
typedef struct Node
{
    char data;
    struct Node* children[26];
    int words;
    int prefixes;
}node;
node *create_node(char data)
{
    node *t = (node *)malloc(sizeof(node));
        memset(t,0,sizeof(node));
        t->data = data;
    return t;
}
int find_prefix(node *root,char *prefix)
{char c = *prefix;
    if(root == NULL)
    {return 0;   }
    if(root->data=='0')
    {return find_prefix(root->children[c-'a'],prefix);}
    else if(root->data==c)
    {   prefix++;
        if(*prefix=='\0')
        {
            return root->prefixes;   }
        else
        {return find_prefix(root->children[*prefix-'a'],prefix);}
    }
    printf("Did not find match\n");
    return 0;
    
}

void add_word(node *root, char *str)
{
    char c=*str;
    if(root == NULL)
    {
        printf("Root is null\n");
        return;
    }
    if(c=='\0')
    {
        printf("Should never come here");
        return;
    }
    if(root->children[c-'a']==NULL)
    {
        root->children[c-'a'] = create_node(*str);
        if(root->children[c-'a']==NULL)
        {
            printf("Failed to create node");
            return;}   }
    root->children[c-'a']->prefixes++;
    str = str+1;
    if(*str == '\0'){
        root->words++;
        return;}
    add_word(root->children[c-'a'],str);
}
void sum()
{   
    int num_ops;
//    int i=0;
    char op[5];
    char str[28];
    node *root = create_node('0');
    if(root == NULL)
    {
        printf("Main : root is NULL\n");
        
    }
    scanf("%d",&num_ops);
    while(num_ops--)
    {
        scanf("%s %s",op,str);
        if(!strcmp(op,"add"))
        {
            add_word(root,str);
        }
        else 
        {
            printf("%d\n",find_prefix(root,str));}    }	}
int main(){sum();   return 0;}
