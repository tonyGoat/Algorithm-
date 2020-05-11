#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

#include "entity/Coordinate.h"
#include "algorithms/InsertionSortIntegers.h"
#include "algorithms/InsertionSortGeneric.h"
#include "algorithms/InsertionSortGenericWithComparator.h"
#include "algorithms/MergeSortIntegers.h"
#include "algorithms/MergeSortGeneric.h"
#include "algorithms/MergeSortGenericWithComparator.h"
#include "utilities/ArrayUtilities.h"
#include "comparator/CoordinateYXComparator.h"
#include "algorithms/QuickSortIntegers.h"
#include "algorithms/QuickSortGeneric.h"
#include "algorithms/QuickSortGenericWithComparator.h"

#include "comparator/Descending.h"
#include "comparator/ByState.h"


using namespace std;
void insertionSortExample(vector<int> unsortedIntArray, vector<Coordinate> unsortedCoordinates);

int main() {

    vector<int> unsortedIntArray{42, 6, 1, 56, 54, 0, 7};
    vector<Coordinate> unsortedCoordinates{Coordinate(3, 3), Coordinate(3, 1), Coordinate(2, 1),
                                           Coordinate(3, 0), Coordinate(2, 3)};
    //insertionSortExample(unsortedIntArray, unsortedCoordinates);

    //----------------

    vector<int> result = MergeSortIntegers(unsortedIntArray).sort();

    //-----------------------------


   string file1 = "C:\\Users\\spear\\Desktop\\CS312\\oscarch-master\\sorting\\data\\numbers.txt";
    auto File = file1;
    std::ifstream in(File);
    string line;
    vector<int> array;
    if (in.is_open()) {
        while (getline(in, line)) {
            array.push_back(std::stoi(line));
                }
        in.close();
            }
    else{
        cout << "unable to open file";
    }

    string file2 = "C:\\Users\\spear\\Desktop\\CS312\\oscarch-master\\sorting\\data\\coordinates.txt";
    fstream newfile2;
    newfile2.open(file2, ios::in);
    ifstream in2(file2);
    string line2;
    vector<Coordinate> Coordinates;
    if (in2.is_open()) {
        while (getline(in2, line2)) {
            string token;
            stringstream ss(line2);
            vector<string> temp;
            while (getline(ss, token, ',')) {
                temp.push_back(token);
            }
            Coordinate tmp(stoi(temp[0]),stoi(temp[1])) ;
            Coordinates.push_back(tmp);

        }

    }








    cout << "Merge sorted Numbers: ";
    array = MergeSortIntegers(array).sort();
    ArrayUtilities<int>::printArray(array);

    cout << "Quick sorted Numbers: ";
    array = QuickSortIntegers(array).sort();
    ArrayUtilities<int>::printArray(array);



    vector<Coordinate> SortedC = MergeSortGeneric<Coordinate>(Coordinates).sort();
    cout << "Merge sorted coordinates: ";
    ArrayUtilities<Coordinate>::printArray(SortedC);

    vector<Coordinate> SortedC1 = QuickSortGeneric<Coordinate>(Coordinates).sort();
    cout << "Quick sorted coordinates: ";
    ArrayUtilities<Coordinate>::printArray(SortedC1);


    MergeSortGenericWithComparator<Coordinate> algorithm1 = MergeSortGenericWithComparator<Coordinate>(
           Coordinates);
    Comparator<Coordinate> *comparator1= new CoordinateYXComparator();
    vector<Coordinate> sortedCoordinates = algorithm1.sort(comparator1);
    cout << "Merge Sorted coordinates (first by y, and then by x): ";
    ArrayUtilities<Coordinate>::printArray(sortedCoordinates);


    //f
    MergeSortGenericWithComparator<int> number = MergeSortGenericWithComparator<int>(
            array);
    Comparator<int> *numbers_d = new Descending();
    vector<int> numberdescending = number.sort(numbers_d);
    cout << "Merge Sort Numbers in Descending Order: ";
    ArrayUtilities<int>::printArray(numberdescending);

    //g Default
    string filePath3 = "C:\\Users\\spear\\Desktop\\CS312\\oscarch-master\\sorting\\data\\addresses.txt";
    fstream newfile3;
    newfile3.open(filePath3, ios::in);
    ifstream in3(filePath3);
    string line3;
    vector<MailingAddress> MailingAddr;
    if (in3.is_open()) {
        while (getline(in3, line3)) {
            string token;
            stringstream ss(line3);
            vector<string> temp;
            while (getline(ss, token, ',')) {
                temp.push_back(token);
            }
            MailingAddress tmp(temp[0],(temp[1]),(temp[2]),stoi(temp[3]));
            MailingAddr.push_back(tmp);
        }
    }


    vector<MailingAddress> MailingAddres = QuickSortGeneric<MailingAddress>(MailingAddr).sort();

    cout << "MailingAdress By default : ";
    ArrayUtilities<MailingAddress>::printArray(MailingAddres);


    QuickSortGenericWithComparator<MailingAddress> sorted_MA_2 = QuickSortGenericWithComparator<MailingAddress>(
            MailingAddr);
    Comparator<MailingAddress> *bystate = new ByState();
    vector<MailingAddress> bystateAddr = sorted_MA_2.sort(bystate);

    cout << "MailingAddress By State  ";
    ArrayUtilities<MailingAddress>::printArray(bystateAddr);

    return 0;

};


//void insertionSortExample(vector<int> unsortedIntArray, vector<Coordinate> unsortedCoordinates) {
//
//    //Sorting an integer array with insertion sort
//
//    vector<int> sortedIntArray1 = InsertionSortIntegers(unsortedIntArray).sort();
//
//    vector<int> sortedIntArray3 = QuickSortIntegers(unsortedIntArray).sort();
//
//    cout << "Unsorted int array: ";
//    ArrayUtilities<int>::printArray(unsortedIntArray);
//
//    cout << "Insertion Sorted int array: ";
//    ArrayUtilities<int>::printArray(sortedIntArray1);
//
//
//    MergeSortGenericWithComparator<int> numbers = MergeSortGenericWithComparator<int>(
//            unsortedIntArray);
//    Comparator<int> *numbers_de = new Descending();
//    vector<int> numbers_decresasing = numbers.sort(numbers_de);
//
//    cout << "Sorted int in descending order: ";
//    ArrayUtilities<int>::printArray(numbers_decresasing);
//
//
//
//
//    cout << "Quick Sorted int array: ";
//    ArrayUtilities<int>::printArray(sortedIntArray3);
//
//
//
//    //--------------------------------------------------
//
//    //Sorting an array of coordinates with in insertion sort.
//    //The sorting is first by the x of the coordinates and then by the y part
//    //In other words, (x1, y1) goes before (x2, y2) if (x1 < x2) or (x1 == x2 && y1 < y2)
//
//    vector<Coordinate> sortedCoordinates1 = InsertionSortGeneric<Coordinate>(unsortedCoordinates).sort();
////    vector<Coordinate> sortedCoordinates3 = MergeSortGeneric<Coordinate>(unsortedCoordinates).sort();
//    vector<Coordinate> sortedCoordinates4 = QuickSortGeneric<Coordinate>(unsortedCoordinates).sort();
//    cout << "Unsorted coordinates: ";
//    ArrayUtilities<Coordinate>::printArray(unsortedCoordinates);
//
//    cout << "Insertion Sorted coordinates (first by x, and then by y): ";
//    ArrayUtilities<Coordinate>::printArray(sortedCoordinates1);
//
////    cout << "Merge Sorted coordinates (first by x, and then by y): ";
////    ArrayUtilities<Coordinate>::printArray(sortedCoordinates3);
//
//    cout << "Quick Sorted coordinates (first by x, and then by y): ";
//    ArrayUtilities<Coordinate>::printArray(sortedCoordinates4);
//
//    //--------------------------------------------------
//
//    //Sorting an array of coordinates with in insertion sort
//    //In this case, the order of coordinates is different:
//    //The sorting is first by the y of the coordinates and then by the x part
//    //(x1, y1) goes before (x2, y2) if (y1 < y2) or (y1 == y2 && x1 < x2)
//
//    InsertionSortGenericWithComparator<Coordinate> algorithm = InsertionSortGenericWithComparator<Coordinate>(
//            unsortedCoordinates);
//    Comparator<Coordinate> *comparator = new CoordinateYXComparator();
//    vector<Coordinate> sortedCoordinates2 = algorithm.sort(comparator);
//
//
//    QuickSortGenericWithComparator<Coordinate> algorithm1 = QuickSortGenericWithComparator<Coordinate>(
//            unsortedCoordinates);
//    Comparator<Coordinate> *comparator1 = new CoordinateYXComparator();
//    vector<Coordinate> sortedCoordinates6 = algorithm.sort(comparator1);
//
////    MergeSortGenericWithComparator<Coordinate> algorithm2 = MergeSortGenericWithComparator<Coordinate>(
////            unsortedCoordinates);
////    Comparator<Coordinate> *comparator2= new CoordinateYXComparator();
////    vector<Coordinate> sortedCoordinates5 = algorithm2.sort(comparator2);
//
//    cout << "Insertion Sorted coordinates (first by y, and then by x): ";
//    ArrayUtilities<Coordinate>::printArray(sortedCoordinates2);
//
////    cout << "Merge Sorted coordinates (first by y, and then by x): ";
////    ArrayUtilities<Coordinate>::printArray(sortedCoordinates5);
//
//    cout << "Quick Sorted coordinates (first by y, and then by x): ";
//    ArrayUtilities<Coordinate>::printArray(sortedCoordinates6);
//
//



