
n=fzero(@(x)x*sin(x)+cos(x),3) % x=3
p=fsolve(@(x)x*sin(x)+cos(x),3) % x=3
n=fzero(@(x)x-exp(-x),2) % x=2
p=fsolve(@(x)x-exp(-x),2) % x=2