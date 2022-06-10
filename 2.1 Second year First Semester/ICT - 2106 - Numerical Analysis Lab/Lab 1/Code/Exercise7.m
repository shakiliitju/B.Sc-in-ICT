% Solve the following circuit to find i1, i2, and i3.

% According to  the circuit diagram the equations are-
%3i1-i2-2i3=1, i1-6i2+3i3=0, 2i1+3i2-6i3=-6

A = [3 -1 -2; 1 -6 3; 2 3 -6];
B = [1; 0; -6;];
 
X = linsolve(A,B)
