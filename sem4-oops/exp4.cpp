#include <iostream>
#include <vector>

using namespace std;

class MAT
{
private:
    int rows;
    int cols;
    vector<vector<int>> matrix;

public:
    // Constructor to create a matrix of size m * n initialized with zeros
    MAT(int m, int n) : rows(m), cols(n)
    {
        matrix.resize(rows, vector<int>(cols, 0));
    }

    // Function to set value at given position (i, j)
    void set(int i, int j, int value)
    {
        if (i >= 0 && i < rows && j >= 0 && j < cols)
        {
            matrix[i][j] = value;
        }
        else
        {
            cout << "Invalid position.\n";
        }
    }

    // Function to get value at given position (i, j)
    int get(int i, int j) const
    {
        if (i >= 0 && i < rows && j >= 0 && j < cols)
        {
            return matrix[i][j];
        }
        else
        {
            cout << "Invalid position.\n";
            return -1; // Assuming -1 represents an error or invalid value
        }
    }

    // Function to display the matrix
    void display() const
    {
        for (int i = 0; i < rows; ++i)
        {
            for (int j = 0; j < cols; ++j)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    MAT add(const MAT &other) const
    {
        if (rows == other.rows && cols == other.cols)
        {
            MAT result(rows, cols);
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < cols; ++j)
                {
                    result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
                }
            }
            return result;
        }
        else
        {
            cout << "Matrices must have the same dimensions for addition.\n";
            return MAT(0, 0); // Returning an empty matrix
        }
    }

    // Function to multiply two matrices
    MAT multiply(const MAT &other) const
    {
        if (cols == other.rows)
        {
            MAT result(rows, other.cols);
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < other.cols; ++j)
                {
                    for (int k = 0; k < cols; ++k)
                    {
                        result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
                    }
                }
            }
            return result;
        }
        else
        {
            cout << "Number of columns in the first matrix must be equal to the number of rows in the second matrix for multiplication.\n";
            return MAT(0, 0); // Returning an empty matrix
        }
    }

    // Function to transpose the matrix
    MAT transpose() const
    {
        MAT result(cols, rows);
        for (int i = 0; i < cols; ++i)
        {
            for (int j = 0; j < rows; ++j)
            {
                result.matrix[i][j] = matrix[j][i];
            }
        }
        return result;
    }
};

int main()
{
    int m, n;

    cout << "Enter number of rows for matrix A: ";
    cin >> m;

    cout << "Enter number of columns for matrix A: ";
    cin >> n;

    MAT A(m, n);

    cout << "Enter elements of matrix A:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int element;
            cin >> element;
            A.set(i, j, element);
        }
    }

    cout << "Enter number of rows for matrix B: ";
    cin >> m;

    cout << "Enter number of columns for matrix B: ";
    cin >> n;

    MAT B(m, n);

    cout << "Enter elements of matrix B:" << endl;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int element;
            cin >> element;
            B.set(i, j, element);
        }
    }

    cout << "Matrix A:" << endl;
    A.display();

    cout << "Matrix B:" << endl;
    B.display();

    cout << "Matrix A + B:" << endl;
    MAT C = A.add(B);
    C.display();

    cout << "Matrix A * B:" << endl;
    MAT D = A.multiply(B);
    D.display();

    cout << "Transpose of Matrix A:" << endl;
    MAT E = A.transpose();
    E.display();

    return 0;
}
