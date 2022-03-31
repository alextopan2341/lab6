//
// Created by Alex on 3/29/2022.
//

#include "console.h"
//
// Created by Alex on 3/22/2022.
//

#include "console.h"
#include "../Square/Square.h"
#include "../Operations/Operations.h"
#include "../Repo/Repo.h"
#include <iostream>
using namespace std;

void readVector(int &n, Repo & repo){
    float x,y,z,w;
    int i;
    cin>>n;
    for(i=0; i<n;i++)
    {
        cout<<"Give the coordinates bottom-left: ";
        cin>>x>>y;
        cout<<"Give the coordinates top-right:";
        cin>>z>>w;

        if(isSquare(x,y,z,w)) {
            Square sqr(i,x, y, z, w);
            repo.addEntity(sqr);
        }
        else{
            cout<<"That cannot be a square! Try again!"<<endl;
            i--;
        }
    }
}

void printVector(int n, Repo repo) {

    for (auto& s: repo.getAll()) {
        cout << s << std::endl;
    }
}

void Options(){
    cout<< endl << "c.Read the coordinates of the diagonal of the square."<< endl;
    cout<< "a.Print the list of squares."<< endl;
    cout<< "1.Largest square."<< endl;
    cout<< "2.Identification of the squares located completely in the first quadrant of the geometric circle."<<endl;
    cout<< "3.Identification of the largest sequence of equals squares."<< endl;
    cout<< "x.Close app."<< endl;
}