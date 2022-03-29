//
// Created by Alex on 3/29/2022.
//

#include "Repo.h"
Repo::Repo() {
}

void Repo::addEntity(Square sqr) {
    this->entities.push_back(sqr);
}

Square& Repo::getEntityById(int id) {
    for (Square& sqr: entities) {
        if(sqr.getId() == id){
            return sqr;
        }
    }
    throw std::runtime_error("No entity with specified id found");
}

//void Repo::deleteEntity(Square sqr) {
//    Square toDelete = getEntity(sqr.getId());
//    auto it = std::find(entities.begin(), entities.end(), toDelete);
//    this->entities.erase(it);
//}

//Square Repo::largestSquare() {
//    Square max;
//    for( Square& sqr: entities){
//        if(max < sqr){
//            max = sqr;
//        }
//    }
//
//    return max;
//}

//vector<Square> Repo::getLongestSequenceWithEqualsSquares() {
//    // TODO: add implementation
//    return vector<Square>();
//}

Square &Repo::getEntity(float x1, float y1, float x2, float y2) {
    for(Square & sqr: entities)
        if(sqr.get_x1() == x1 && sqr.get_y1()==y1 &&sqr.get_x2() == x2 && sqr.get_y2()==y2)
            return sqr;
    throw std::runtime_error("No square with specified coordinates found");
}

std::vector<Square> Repo::getAll() {
    return entities;
}
