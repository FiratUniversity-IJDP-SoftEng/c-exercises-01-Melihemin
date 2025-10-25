#include <stdio.h>
#include <ctype.h> 
#include <math.h>
// Melih Emin KILICOGLU
// Firat University
// C Programming Exercises 06
// Example 6

char userinput[1000];

int count_letter(char str[1000]) {
    int letter_count = 0;
    for (int i = 0; i < 1000; i++) {
        char c = str[i];
        if (c == '\0'){ 
            break;
        }
        
        if (isalpha(c)) { 
            letter_count++;
        }
    }
    
    return letter_count;
}

int count_word(char str[1000]) {
    
    if (str[0] == '\0' || (str[0] == '\n' && str[1] == '\0')) {
        return 0;
    }

    
    int word_count = 1;

    for (int i = 0; i < 1000; i++) {
        char c = str[i];
        
        if (c == '\0') { 
            break;
        }

        if (c == ' ') {
            word_count++;
        } 
    }
    return word_count; 
}

int count_sentences(char str[1000]) {
    
    int sentence_count = 0;

    for (int i = 0; i < 1000; i++) {
        char c = str[i];
        
        if (c == '\0') { 
            break;
        }
        
        if ((c == '.') || (c == '?') || (c == '!')) {
            sentence_count++;
        }
    }
 
    return sentence_count;
}

int calculate_grade(int word_count, int letter_count, int sentence_count) {
    if (word_count == 0)
    {
        return 0;
    }

    float per_L = (float)letter_count / (float)word_count * 100.0;
    float per_S = (float)sentence_count / (float)word_count * 100.0;
    
    float index = 0.0588 * per_L - 0.296 * per_S - 15.8;
    
    int grade = round(index);
    return grade;
}

int main() {
    printf("Text: ");
    
    fgets(userinput, 1000, stdin); 

    int letters = count_letter(userinput);
    int words = count_word(userinput);
    int sentences = count_sentences(userinput); 
    
    int grade = calculate_grade(words, letters, sentences);

    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }
    
    return 0;
}

