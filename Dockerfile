FROM gcc:13

# Install libs
# RUN apt-get update && apt-get install -y \
#     libsfml-dev \
#     && rm -rf /var/lib/apt/lists/*

# postgreslib 
RUN apt-get update && apt-get install -y \
    libpqxx-dev \
    libpq-dev \
    && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY . .

# compile with g++ 
# the file ending with .cpp under src 
# using c++ version 20 
# into a exec file named game
RUN g++ $(find src -name "*.cpp") -std=c++20 -lpqxx -lpq -o game

# Default command to run your game
CMD ["./game"]


COPY . .