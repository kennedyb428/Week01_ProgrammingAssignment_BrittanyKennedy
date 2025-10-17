/*
Name: Brittany Kennedy
Date: 10/16/2025
Section: ITCS 2530 H0801 2025FA - C++ Programming 1

Week01_Programming_Assignment_Brittany_Kennedy.cpp:
********************Vegetarian Nutrition for Weightlifting*********************
Program to help user figure out their suggested daily and per meal macros (protein/carbs/fats).
The percentages used in the macros target calculations are geared toward vegetarians that weightlift.
*/

#include <iostream>
#include <string>
using namespace std;

// **********************Define constants for calculations*********************
// Macro ratios as percentages of daily calories: 30% protein, 40% carbs, 30% fats
const double PROTEIN_PERCENT = 0.30;
const double CARB_PERCENT = 0.40;
const double FAT_PERCENT = 0.30;

// Calories per gram for each macro
const int CALORIES_PER_GRAM_PROTEIN = 4;
const int CALORIES_PER_GRAM_CARBS = 4;
const int CALORIES_PER_GRAM_FAT = 9;
// ****************************************************************************

int main()
{
    string name;
    string  favoriteProtein;
    int totalCalories;
    int mealsPerDay;

    int proteinCalories;
    int carbCalories;
    int fatCalories;

    int gramsProtein;
    int gramsCarbs;
    int gramsFats;

    int proteinPerMeal;
    int carbsPerMeal;
    int fatsPerMeal;

    // Introduction and greet user
    cout << "Welcome to learning more about vegetarian nutrition for weighlifters!\n";
    cout << "Let's learn more about you so we can figure out what your macros should be!\n\n";
    cout << endl;

    // Get user's name
    cout << "What is your name? ";
    cin >> name;
    cout << endl;

    // Get user's favorite protein source
    cout << "Hi " << name << "!\n";
    cout << "Enter your favorite vegetarian protein source and click enter. ";
    cin >> favoriteProtein;
    cout << "Great choice!\n\n";;

    // Ask for desired daily calore target
    cout << "Enter how many calories you are targeting each day and click enter. ";
    cin >> totalCalories;
    cout << endl;

    // Get how many meals per day the user eats
    cout << "Last question! How many meals you eat per day? ";
    cin >> mealsPerDay;
    cout << endl;


    // ***********************Calculations*************************************
    // Calculate user's macros using defined macro ratios
    proteinCalories = static_cast<int>(totalCalories * PROTEIN_PERCENT);
    carbCalories = static_cast<int>(totalCalories * CARB_PERCENT);
    fatCalories = static_cast<int>(totalCalories * FAT_PERCENT);

    // Convert calories to grams for daily targets
    gramsProtein = proteinCalories / CALORIES_PER_GRAM_PROTEIN;
    gramsCarbs = carbCalories / CALORIES_PER_GRAM_CARBS;
    gramsFats = fatCalories / CALORIES_PER_GRAM_FAT;

    // Calculate macro targets per meal
    proteinPerMeal = gramsProtein / mealsPerDay;
    carbsPerMeal = gramsCarbs / mealsPerDay;
    fatsPerMeal = gramsFats / mealsPerDay;


    // *************************Give user their results************************
    cout << "***************************************************************************\n";
    cout << "Thank you for all of your details - here is the information you provided:\n";
    cout << "Favorite protein source: " << favoriteProtein << endl;
    cout << "Daily calorie traget: " << totalCalories << " calories\n";
    cout << "Meals per day: " << mealsPerDay << " meals\n\n";

    cout << "Here is are your suggested daily macros:\n";
    cout << "Protein: " << gramsProtein << " grams (" << proteinCalories << " calories)\n";
    cout << "Carbs: " << gramsCarbs << " grams (" << carbCalories << " calories)\n";
    cout << "Fats: " << gramsFats << " grams (" << fatCalories << " calories)\n\n";

    cout << "For your " << mealsPerDay << " meals per day, your macro targets per meal are:\n";
    cout << "Protein: " << proteinPerMeal << " grams per meal\n";
    cout << "Carbs:   " << carbsPerMeal << " grams per meal\n";
    cout << "Fats:    " << fatsPerMeal << " grams per meal\n";
    cout << "***************************************************************************\n";
    cout << "Now you can keep fueling with " << favoriteProtein << " to hit that " << gramsProtein << " grams of protein!\n";
    cout << "Keep lifting heavy, " << name << "!\n\n";

    return 0;
}
// ****************************Vegetarian Nutrition for Weightlifting****************************