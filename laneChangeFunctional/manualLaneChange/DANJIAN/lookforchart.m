function y = lookforchart(curx,cury,x)
n = length(curx);
if n <= 1
    y = cury;
else
    for i = 1:n-1
        if x <= curx(i + 1) && ...
           x >= curx(i)
                y = cury(i) + (cury(i + 1) - cury(i)) * (x - curx(i))/(curx(i + 1) - curx(i)); 
                break;
        end
        if x > curx(n)
            y = cury(n);
        else
            y = cury(1);
        end
    end
end
end