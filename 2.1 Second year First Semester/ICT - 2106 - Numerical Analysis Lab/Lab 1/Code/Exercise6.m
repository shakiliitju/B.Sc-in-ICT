% Define the matrices A=[17 2 3 4; 5 6 7 8; 9 10 11 12; 13 14 15 16],B=[ 2 3 4 5 ; 6 7 8 9 ; 10 11 12 13 ; 14 15 16 17 ], C=[ 1 2 3 ; 4 5 6 ; 7 8 9 ], y=[ 4 3 2 1 ]'
% (a) Compute AB and BA. Is matrix multiplication commutative?
% (b) Compute AC. Why do you get an error message?
% (c) Solve the following system of equations:
% 17x1+2x2+3x3+4x4 = 4, 5x1+6x2+7x3+8x4 = 3, 9x1+10x2+11x3+12x4 = 2, 13x1+14x2+15x3+16x4 = 1

A = [17 2 3 4; 5 6 7 8; 9 10 11 12; 13 14 15 16]
B = [2 3 4 5; 6 7 8 9; 10 11 12 13; 14 15 16 17]
C=[1 2 3; 4 5 6; 7 8 9]
Y = [ 4 3 2 1 ]'

% (a)
A.*B
B.*A

% (b)
A.*C;

% (c)
linsolve(A,Y)
