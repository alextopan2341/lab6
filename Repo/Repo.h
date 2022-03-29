//
// Created by Alex on 3/29/2022.
//

#ifndef LAB5_REPO_H
#define LAB5_REPO_H


#include <vector>
#include <algorithm>
#include "../Square/Square.h"

using namespace std;

class Repo{
private:
//    Entity entities[1];
    vector<Square> entities;

public:

    /**
     * Constructor
     */
    Repo();

    // CREATE
    /**
     * Adds an entity to the repo
     * @param e
     */
    void addEntity(Square sqr);

    // READ
    /**
    * Gets an entity by id
    * @param id the entity id
    * @return the entity
    */
    Square& getEntityById(int id);

    Square& getEntity(float x1, float y1, float x2, float y2);


    // DELETE
    /**
     * Deletes an entity from the repo
     * @param e
     */
    void deleteEntity(Square sqr);

    /**
     * Returns the biggest entity from the repo
     * Compares entities using operator==
     * @return the biggest entity
     */
    Square largestSquare();

    /**
     * Returns the maximal sequence of equal entities
     * Assumes entities are ordered by ID
     * @return a vector of equal entities
     */
    vector<Square> getLongestSequenceWithEqualsSquares();

    std::vector<Square> getAll();
};



#endif //LAB5_REPO_H
