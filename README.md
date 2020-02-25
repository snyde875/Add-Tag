# Add-Tag
Uses a text file of all the images you want tagged as input

Pre-conditions:
  A text file listing all the images you want to add a tag to is needed
  Full filepath to the image is needed when refrencing the image in the text file
  The program is written assuming that each line of the text file begins and ends with quotes
  Each run of the program can only add a single tag 
  The program assumes that each file has the same extension 
  
 Post-conditions:
  Adds the requested tag to every single image in the text file without changing its directory
  
 Some notes on use:
  Copying and pasting a folder's filepath to a text file is usually the best way to use this 
  To add a tag to your images, open the main.cpp and set the "tag" variable equal to whatever tag you'd like (keeping the brackets)
  Then, change the file variable equal to the filepath that your image list is located at 
  Afterwards, simply run the main.cpp file to add tags to all your files
  
 Future Goals:
  Add a "clean" function to the program that eliminates unneeded quotes
  Optimize the code so that users can add tags to various files with various extensions
  Add a GUI to make it easier to select which files you wish to rename, completely erasing the need for the user to create
  a text file of all the images.
  Add a GUI so that users do not have to manually change code.
  
