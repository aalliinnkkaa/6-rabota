#include <stdio.h>

int main() {
    
    char gryppa[5][40] = {"/slovo_pachana.txt", "Adidas Vova", "Turbo", "Palto", "Eralash (ne zabudem)"};

    printf("Имя файла: %s\n", gryppa[0]);

    char pipyau[100];
    int index = 0;
    for (int i = 1; i < 5; i++) 
    {
        int j = 0;
        while (gryppa[i][j] != '\0') 
        {
            pipyau[index] = gryppa[i][j];
            index++;
            j++;
        }
        
        pipyau[index] = '\n'; 
        index++;
    }
    
    pipyau[index] = '\0'; 
    printf("\nСодержимое файла:\n%s", pipyau);

    char target[] = "zabudem";
    int contentLength = 0;
    int targetLength = 0;

    while (pipyau[contentLength] != '\0') 
    {
        contentLength++;
    }

    while (target[targetLength] != '\0') 
    {
        targetLength++;
    }

    int found = 0;
    
    for (int i = 0; i <= contentLength - targetLength; i++) 
    {
        int match = 1;
        for (int j = 0; j < targetLength; j++) 
        {
            if (pipyau[i + j] != target[j]) 
            {
                match = 0;
                break;
            }
        }
        if (match == 1) 
        {
            found = 1;
            break;
        }
    }

    if (found) 
    {
        printf("\nСлово \"%s\" найдено в тексте\n", target);
    } 
    
    else 
    {
        printf("\nСлово \"%s\" не найдено\n", target);
    }

    return 0;
}
