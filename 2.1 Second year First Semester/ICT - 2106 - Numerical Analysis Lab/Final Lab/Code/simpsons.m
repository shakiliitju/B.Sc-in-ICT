% Md. shakil Hossain
% Exam Roll : 192340
% Class Roll : 2023
% Question 1


f=@(x) ((x-1).*x./2).*((x-1).*x./2);
I=simpsons(f,-1,1,2)

function I = simpsons(f,a,b,n)

if numel(f)>1 
      n=numel(f)-1; h=(b-a)/n;
      I= h/3*(f(1)+2*sum(f(3:2:end-2))+4*sum(f(2:2:end))+f(end));
else 
      h=(b-a)/n; xi=a:h:b;
      I= h/3*(f(xi(1))+2*sum(f(xi(3:2:end-2)))+4*sum(f(xi(2:2:end)))+f(xi(end)));
end

end