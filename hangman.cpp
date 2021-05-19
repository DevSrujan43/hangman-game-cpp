#include<bits/stdc++.h>

int main()
{
    
    std ::string fruits[10] {"mango","papaya","apple","orange","banana","kiwi","watermelon","peach","grapes","strawberry"};
    std :: string answer = fruits[rand()% 10];
    std::vector<int> foundchar;
    int foundCount = 0;
    int lives = 5;
    while (foundCount < (answer.size()-1) && lives > 0)
    {
        std:: cout << "Guess the fruits name:" << std :: endl;
        std::cout << " \nYou currently have: " << lives << " lives." << std::endl;
        foundCount = 0;
        for (int i = 0; i < answer.length(); ++i)
        {
           
            if (std::find (foundchar.begin(), foundchar.end(), i) != foundchar.end())
            {
                
                std::cout << answer[i] << " "; 
                foundCount++; 
            }
            else
            {
              
                std::cout << "_ ";
            }
        }
        std::cout << std::endl;
        char userChoice = ' ';
        bool found = false;
        std::cout << "Choose a character..." << std::endl;
        std::cin >> userChoice;
        for (int i = 0; i < answer.length(); i++)
        {
            if (userChoice == answer[i])
            {
                found = true;
                foundchar.push_back (i);
            }
        }
        if (found == false)
            lives--;
        
    }
    
    if (lives != 0)
        std::cout << "\nCongrats you found the word!" << std::endl;
    else
        std :: cout << "The correct word is " << answer << std::endl;
        std::cout << "\n You failed !" << std::endl;

    return 0;
}