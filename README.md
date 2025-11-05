# To run the game you need a c++ compiler and a docker

## To run, frist type this command, to clear the docker and prevent errors
```bash
    docker compose down -v
```


## Then type this command to build
```bash
   docker-compose up --build
```


## Then, in a different console (you MUST open a different console), you type this command to run
```bash
    docker-compose run --rm app
```
