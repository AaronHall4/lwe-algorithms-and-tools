#ifndef LATTICE_H
#define LATTICE_H

/*
 * Represents a full rank lattice in R^n.
 */
class Lattice {
    private:
        int n; // Number of basis vectors.
        int** basis; // Column matrix of basis vectors.
    public:
        Lattice(int n, int** basis);
        std::string to_string();
};

#endif

