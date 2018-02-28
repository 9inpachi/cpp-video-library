# C++ Video Library
A video library made in C++ using file handling. Features include playing videos, adding videos, and deleting videos.

# Set Up:
- Change the path for media player on <b>line 72</b> of <b>video_library.cpp</b>
- Files for lists will be automatically generated in the includes/data/ folder.

# Features:
- Playing videos
- Adding videos
- Deleting videos
- File handling
- Properly commented code for better understanding
- Object oriented C++

# Bugs:
- Do not add videos with paths which include spaces. This can be fixed by using getline() function instead of simple cin.
- Delete video which is at the bottom of the list. Deleting a video in middle or start of the list can cause errors. This is because of     linear file handling. Can be fixed if looked into properly.
