# game

## How to run
```bash
    docker-compose up --build
    docker-compose run --rm app ## RUN THIS IN A DIFFERENT CONSOLE
```

    After ending development, run this to clean memory usage
```bash
    docker rmi -f $(docker images -a -q)

    # if needs to clean db
    docker compose down -v
```

To check DB container
```bash
    docker exec -it postgres_db psql -U postgres -d mydb
```
