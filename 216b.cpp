// ┌┬┐┬─┐┌─┐┬  ┬┬┌─┐┌─┐┌┐┌ //
//  │ ├┬┘├┤ └┐┌┘│└─┐├─┤│││ //
//  ┴ ┴└─└─┘ └┘ ┴└─┘┴ ┴┘└┘ //

#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main() {
	int n, ne;
	cin >> n >> ne;
	int a[ne], b[ne];
	for (int i = 0; i < ne; i++) {
		cin >> a[i] >> b[i]
	}
	vector<int> adj[ne];
	bool visited[ne];

	return 0;
}

void dfs(int s) {
	if (visited[s]) return;
	visited[s] = true;
	for (auto u : adj[s]) {
		dfs(u);
	}
}

/*
 #problem
 - equal number of people;
 - there are enemies (at most 2 per student);
 - no two enemies in one team;
 - if it is impossible (to slipt): students go to bench
 - ans: minimum number of students you will
 		 have to send to the bench in order
 		 to form the two teams;
 - input: 1line = n of students(ns) and the
 		   number of pairs of enemies(ne);
 		  nelines = the students that are
 		  enemies of each other;
 - output: minimum that are going to the bench;

 #ideia:

*/