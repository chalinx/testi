#include<iostream>

using namespace std;


class Node{
public:
	string name;
	list<string> nbrs;
	Node(string name):name(name){

	}
};


class Graph{
		//All nodes
		//Hashmap (String, Node*)

		unordered_map<string,Node*>m;

public:
	Graph(vector<string> cities){
		for(auto city:cities){
			m[city]=new Node(city);
		}
	}

};