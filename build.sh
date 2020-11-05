clang++ *.cpp *.hpp
rm -rf *.gch *.o
if [ -f "a.out" ]; then
mv a.out tdt
echo $(tput setaf 2)$(tput bold 1)Build completed$(tput bold 0)$(tput setaf 0)
else
echo $(tput setaf 1)$(tput bold 1)Build failed$(tput bold 0)$(tput setaf 0)
fi
