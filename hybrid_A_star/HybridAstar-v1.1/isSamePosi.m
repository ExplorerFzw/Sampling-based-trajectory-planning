function result = isSamePosi(a, b)
%判断两个点是否都相同

result = false;
if a(1,1) == b(1,1) && a(1,2) == b(1,2)
    result = true;
end

end