//
// Created by fra on 18/10/21.
//

#include <memory>
#include "Vertex.h"

Vertex::Vertex(int self, int color, int weight) : _self(self), _color(color), _weight(weight) {}

void Vertex::addEdge(int v2) {
    _adjL.push_back(v2);
}

std::shared_ptr<std::list<int>> Vertex::getAdjL() {
    return std::make_shared<std::list<int>>(_adjL);
}

int Vertex::getColor() const {
    return _color;
}

int Vertex::getWeight() const {
    return _weight;
}

int Vertex::getSelf() const {
    return _self;
}

void Vertex::setColor(int color) {
    _color = color;
}

void Vertex::setWeight(int weight) {
    _weight = weight;
}
