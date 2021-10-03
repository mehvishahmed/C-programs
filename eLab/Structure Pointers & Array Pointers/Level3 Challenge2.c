#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define newTrie (Trie*) calloc(1, sizeof(Trie))
typedef struct node
{
    bool isWord;
    int max;
    struct node *next[26];
}Trie;
void insert(char*, Trie*, int);
void print(Trie* , char*, int);
int main(void )
{
	int n, w, q, i = 0;
	char string[1234];
	scanf("%i %i", &n,&q);
	Trie *t = newTrie, *ptr; 
	while(n--)
	{
		scanf("%s %i", string,&w);
		insert(string, t, w);
	}
    while(q--)
    {    
        scanf("%s",string);
        w=1,i=0;
        ptr = t;
        while( string[i] != '\0' )
        {
            if(ptr)
                ptr = ptr->next[string[i]-'a'];
            else
                break;
            i++;
        }    
        printf("%i\n",ptr?ptr->max:-1);
    }    
	return 0;
}
void insert(char *string, Trie *root, int w)
{
    if(root->max < w)
			root->max = w;	
    if (*string!='\0')
	{
		if (root->next[*string - 'a'] == NULL)
			root->next[*string - 'a'] = newTrie;
    	insert(string + 1, root->next[*string - 'a'], w);		
	}
	else
	{
		
		root->isWord = true;
	}
}
void print(Trie *root, char *string, int level)
{
 
	if(root->isWord == true)
	{	string[level] = '\0';
		printf("%i\n",root->max);
        puts(string);
	}
	int i;
	for( i = 0; i < 26; i++)
	{
		if (root->next[i])
		{
			string[level] = i + 'a';
			print(root->next[i], string, level + 1);
		}			
	}		
}
