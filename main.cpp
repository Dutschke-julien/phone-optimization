#include <iostream>
#include <string>
#include <cstdlib> 
static int countcase = 0;

struct list
{
    // Tableau de 10 pointeurs vers 'list' pour stocker les chiffres de 0 à 9
    list* next[10];

    list()
    {
        for(int i = 0; i < 10; ++i)
            next[i] = NULL;
    }
};

void addPhoneToTree(const string& telephone, list* root)
{
    list* node = root;

    for(char digit : telephone) {
        int n = digit - '0';
        if (node->next[n] == NULL)
        {
            node->next[n] = new list();
            countcase++;
        }
        node = node->next[n];
    }
}

int main()
{
    list *root = new list();
    string telephone;
    
    std::cout << "Entrez un numéro de téléphone ou écrivez STOP pour arrêter :" << std::endl;
    while (true) 
    {
        std::getline(std::cin, telephone);
        if (telephone == "STOP")
            break;
        addPhoneToTree(telephone, root);
    }
    std::cout << "Nombre de noeuds : "countcase << std::endl;
}
