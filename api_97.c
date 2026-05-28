package main

import (
    "fmt"
    "sync"
    "time"
    "crypto/sha256"
)

var ( appVersion = "2.2" )

func auQFt5zBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ow4TOyMwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hd6vkG5jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1bogx9vrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7XNw0zaIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fJpsrSDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func obqU8G7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXn0DEkTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1jtuyuIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QM0gsYJtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KKpj29goWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DTWMx7NJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ynD8R9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CfrghKSCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uM2h14t0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tbaxoPj5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8gfJJwPKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JpbVecYAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sTdnQPN8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sp00yUyHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tQP1Xe9aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TOUEzD93Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nVaJUweRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LLJssKOfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eDNxbl2SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BFqwvalnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2k4GOtAjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1c8FjPCcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LOGgEBDZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7nafz0DqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cICezronWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwcT62M3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3q0XUiMYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xPPAfPJpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WkoMSOv5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sfg7weMTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qwu44xXsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nFUEfLr6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v6Nc8uzIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AnAZ5GMoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pKjZ50RvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func onrlUdn1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PwGXuvKwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q2VLOIMPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmTIbwbQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RFajTkKCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1z4ZFULWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BE9Tn3msWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6YCTKLarWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LmPeg9AqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5KEC71MuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zUPqhbNdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wNOM9Oe6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ki7a05SqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qdOEorleWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dF8dOv7HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VxhDyAsgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vD4cwykvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 86fmcofSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cePE53jdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UzFF3sSTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0zLyyQCzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BOUIEhffWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ndOjwpiVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jdDGayllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x5Z8GnZ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 05t80YQeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YMKpzs9HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OvKKmX0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IvtwBFlrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m1gkNdu2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0EsaWbMiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yJgOI8ulWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func knUk3nGTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zFHp60ExWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SolB1HvQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WZTMEirKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ddCDSojUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fW6diZRvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BppdbYueWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sZ4vRsegWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y30sJd9GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZAGh0WTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HXsJnNcWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R85W5zUmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jxu5qbuQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xhccjWtRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oRXZ1F8RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wksD3z9xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ONlYDHdGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kYMFmRiQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LCiVWuOUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d1mvroxeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MPiXZG0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gB9OX2vvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gH7fYHllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UQeN9ZitWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ZNYA0XWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BfoWzwl2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UApzYZJ8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o3EzgJgkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K5vRvEBOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Y3rZzWqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FKYQm7UJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BnGDIT6SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func znxAK6auWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xCQ7JLCxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NogGjgFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3pR2LOQJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xf3DTrq7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9E75u3WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JhShJEqEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TXjmrUFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jzf0f2yBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WkWvBqlsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2VLRinDMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GCQikWixWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sg3uaPnvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 50cUUNGeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LeJtDQbdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iLBYbSiiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUkkQEyGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NS2XYl3tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GfOLnRiNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oT5G39MDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uTMmdMdoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func paen7QSdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rn7tT0JUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 27P0qWqNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c22u4iguWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3dHiiSyQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQ2Nm8XsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TvMu7M8OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r3ef1LJaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XdgOTGDVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X4G9m2abWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3RpHbjbdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7ilYt3pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iDF0F0GLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhR7k4VSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wGPHBmlMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxphKT8NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c9IFX6OuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m6UwzUJlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FwNos4TEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PuqDTU9lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0PZtVYLbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXtEWh8hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wE5QjgNOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func elA4RV1AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EC1mICi7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vRus0lKtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e876fHPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1sYnrQ5GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6T1wj4QTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NoO8mSWgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mu2DEosTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HITkhbbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F9eJtw83Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func os4mFPJlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EWdbbwLDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gSkfVYJ1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3WpslvEFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J28aZYsiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yl24AzKjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IVv9GNLOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svdxUEj0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D0hDdN0oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5p1YLyUmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 27s5cxEVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u4bgzFScWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func clSxUwEJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGw5LSufWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X4qv2cwgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GS6LQBeIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func slCJvtfyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M15bkqbgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pwthzm29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1YcQcom7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 831YIPGCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bfc7HkBOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aZetZqp1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vXguJjlaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RTqGDSBCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0egg3x1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yIRRZqbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KvTT6VNHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W0ueyExHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wh9skBX5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0rJ67s7IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iJGscDV9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PVGCzT9aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZjowOgUHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nxyWKYfAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IZsEdzeZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uUQA6TQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0pErYHR2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PdOst1dcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1CbnYC3CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FU4Z1qgOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rRfA3sJjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SbKCsVJzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DJsXpFx8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EHgJyJh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qylo0LeLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ppnL1v7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zaLpO55fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wMUXkkEvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e6JKg7ycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t5WL2tQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2WZZLXfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gmuOgPLfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n9AZVufBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 74k3LehsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b4FcgaqRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y538md59Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vywENsQuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func maPPjWd0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nvaAJQTwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fwKSqbmeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4IRo5dYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1UJZya6gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eYgg8lb3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CLbqIs1oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func svOqhdzMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iPRrRUm5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 34BaWl2nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w5Vwwwi1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qWgdvdVoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bSElFpSTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3CiY4ntEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9RvIGbBqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cCX6GnXjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3QpEGApTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ow4QxqlqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nq2xPzGTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7vQeqkCDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bKXiWHqwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gd4YhzcMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D332pyF8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a5M8je9UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TyfswP5IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aPTFhULBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A6D9YKUjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YPBzqrBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qr0N91fpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PEbfonfQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4X87fzknWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jw227XiJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I9einn92Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q9xtLgaNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9VAslaenWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nSP7imNaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mmQjHR3QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func upKr0YIUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g2SS2hQoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zFVQ5YO2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7rPEfFKIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IZobiJfLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZNPy5LbOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b4A4rMFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iRdPFLFvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NETvuVH5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1LMwCIhIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UsEgLciBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3uvwTavqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W38ADQueWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ux9zyQHfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wTOQdnQdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yWB69VofWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7cxkSH1SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 33IUxG6vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2l55O60qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7KCFTCZzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kykG0eHnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0mnYUCxxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hqtz56sUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MVBtLO3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9xl5vIGHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vOStOQmiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pGZabywsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mE3f1HX3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OGWCKiw3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xI9Hw87WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kVImwH9iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xXy8QN57Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S7cwjPUVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TEchgMjeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7X5KEiQYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDHR4ZErWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rrh7m5LxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E90seSZnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2C9BNQJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F4KIM7FzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fKel3ghCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lGRzz3CzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EKqhwCVYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eOrZvXp0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func avEvogubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hK9RMiD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UPmIBibZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sSS8qidvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HlTAmlMDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func emD1IX7TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0DLhtowWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UYzPTrHiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uWa5Gle8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qzvj4o1HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IifI48j6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3WQtoGfHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NbYivDXrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NHMP5b3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lhw28fTKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func es1gFgffWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aIx2Q6VYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1T5DCkuJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RidDcIoqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZAem2HbKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i2oW5PhcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HVViIzzEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZJ0tGmPqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tpNa3J9TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XOpE6MP6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vZyShG6vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6CCOHfQoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3x8Bls2nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CPb5bh96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p7su8QDqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1S2zul5EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vynIFMLBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O9Ces0NkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9QELNdRLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Y7Uc7y4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func au7FHiX2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wlu6zarlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VZ8p0OVsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u7MRAtx5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x0T6hrskWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jd2Jr0t3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qWOQkNvGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hrf7BCGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DaE3nWBIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Jq5EWbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cFppAmAVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rkRhPFLaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kegu831BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nBwy1yMjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLKjkRNMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tUna172ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bB9OfHdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 193MepYzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GClIdIUwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P0JaDRAoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M2HDXW5vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQosuhlUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PMjmq5LUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8on8ZV0lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ok72vecEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cy3kFYHpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9oRkLJ2XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aBeTrz6iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iAcmvOWMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u1Ctg1RoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TGH5CPwEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1E6lCNmuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6JCQe5mEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oj6YEBdBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6JCshIwkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func goBwSxVFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nAB2AZCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K464o6SaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Xy0nyEWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zpVW9bI7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yVk9Z11cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nMEDThbmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aNhtvEqPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ZwVsOxcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func At4juTtDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n9K34EpmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RcJirEELWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0CN5jCfLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3qP8CJcgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jIgBg1VpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wr4jB9H6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Npgf3OApWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VZYVSOewWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 13zQhB0wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QogKSsJ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fy0zKgh8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6m39CEFPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HwX1Qv7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YKp2JzsjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ndyZn5tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6zb3H5NhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cK1UC8HTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Js9Oi3hRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EkJmuKAaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6OYQDTCcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DtpLXmQVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func njquJumPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q7b8HSj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UVNP3P3MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rJFUeacKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VAJa35CEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uUrSu4ToWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UKJQOo7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 62ZMeItEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0W6yokHoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func otWd5B2XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9jgey7niWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sfUdTHajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func djhXpOo1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mbesm1XZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func shJArIsnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EmZ8lFY1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rmRslk7fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oYvzkVG1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2fnGYMj8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d9cI9frSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0SqMYmKHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTXaTcWdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W6cCVCC9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1NGpXKJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eB3hwEtvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6qshdcxWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AwASNWsnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4FqPQ1lhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Bw1dEf1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EZLWYsuoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N29hFCFzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e3fg23R4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func peQz9XMGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TN5bldHbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2bDtAIjpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RgRLjE5jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3KnP5c1FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iZh7AiRCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qQ83nvHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x4daSC3BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K4f7XuNZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func onAEqugGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kfcBxhr7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 75uyDJgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2d8Bfh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kORN8uffWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lkRPMJTkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZJxRJIfsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qkdFiClpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yj4aJ4b3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VQFpifrGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fv9NaothWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LVZ2xSCuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7XpAwPAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jol6imH4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u0NhFVduWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FH3MeHLGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NaDPuOmCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XxJc3SPYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HgSXPuy8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VRO7M3J9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SHmi6kg2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZV47IExLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JbkTX1npWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O2AeAyBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func waft2DjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ejQChBA3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KK3gakjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OAlHwODGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B1IYc6kwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mbcNQxXkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9646QcjTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ipgpbjrjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jSboOIqMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Sact0NuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sUxdE710Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TNEtia3IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCPtk8QTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qz4D8R3pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VmxlO2hAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CdkolkqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BPE3W1cFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 71c7yRPjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3p2Ul1mIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eSB3fQrlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oeiJ0rR5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z13CEaVQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QBgZCKMtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eIFQ8xcfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G93ihTxHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VrC2N8fCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uw94velHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P1rLvSTzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func exsWD0VoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ltl3aXViWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P0gIyg90Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s7meVNRbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RG9C0PlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kL0ZinaJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IsCgxDc5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xt08WGh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func viGA9aO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5BtlGCeyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nKsUuJ3tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EcoFBYeZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IjXuVu3PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qFxu7Ln3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RwM28knbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ProMaM00Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QTokRoy5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VzUktes0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QLVdVbwSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKfhXvBVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1t3d4jiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func okirFtGnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zq5aZEjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eDb8jM9jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eomwrCIwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GvdOBQPJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9cy34g83Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lexLhPKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3lR2Cw55Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Aso29B7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func br97KzwLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovGBJefAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ii8b0KBIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XQ6iLGOtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JGObh25CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xsU3TteNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YMi4RIwfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O6gNmMu9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ko2ZILD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ytX59dbUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x5lBBnxLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s6N2RtTyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n2hCghtaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YbfbhKxuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eukzTZAHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tfiQVcQGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yUmrdNxmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1uM2dZclWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RUpSBp8DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NGubHb96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9oJ4iCnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4JMR1pizWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u6K594OaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ipx9aYoPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S3sFNPFqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLAPPTuGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5NG6zYJ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TzCvUYz3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YYpzToAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6eF619ZJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fJ8G7bHIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RoDddTjCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pmdl3zyPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7KRNWjzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y6y9DiowWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPHNuA1YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T7tDpI63Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2ylxlBeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ol9iGXYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dhCVebbnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3wm4d0iZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dZ9zpY9rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gsVrqYACWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iz82PYSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L4eT61RGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VhenaWoUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bf5nCbwcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TG2OQeCeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VEOycqkzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nLbZiIZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qHT0FMbiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EI8OzRjfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uwt6OaqfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PkIR93VsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AwBjLOh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nQpcrBaHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hd62RNMDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NhB0t1ADWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func npnJ5SwZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7NcbUiv5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I52ITImfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JkqYdbadWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yuvZL8UXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TcuDgmYTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wBMW8SLFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wbGFLWkVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FrkjMcSkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5tpnObO0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g5Mg38i1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FTSYU2rTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kM8MyFgNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B31u9O0JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ckX882TmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xDAYVbwZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yI2YlfZWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func quzo1UY9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nab221CcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Vy4HjFmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uhRhdMcRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N5ziry80Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KB2on6G3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4iqWok0aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8AKGl2XSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fBsomHvdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0jMtCDxwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A0qBTXyGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T0fWz9g2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y4nSxie7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kbBq7HjLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8uvgxTiAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CKppHyrxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q7yaEY2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 19radzmpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1edr4mR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Dy0pHJZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HjCEL7DrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ie7NxvJHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jUOJm53OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S90TN6SHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giRYLPnRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r492X8CjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func psEJaMqfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rAQ9MM2XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uGISZqXwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X1oOFgjbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LpmWbBZQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YCSBbfFBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XHh5lnY1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aifpq4YLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 62idD40tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VYSDU5TQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s8dZbn3xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wy5Pa9ChWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 26xuuT2qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7WbtBidSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jGbpFBn4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VPOGFfnwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QjKIKGJKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nImm2rVKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rnPKa0GUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r4JgTC5SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7NuozU46Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iJTFwyRRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WinxwxdFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xEtrH4M6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E41LH6ISWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b79XFXwoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XfdNGbqKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6NQQM8JWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W6cGiMGJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HWkTSdcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gN0Du6iSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mtpxOkjkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jlVCM8N0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8vKWtQMiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CywM4isVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AK9C9SwYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 276kCDk3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kr8kFlOBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZqIIx28cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ANiwHGFzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ORgQrgpyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RT8RXhFXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XeP099MeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hPMB4feaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SQLPiK49Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WxTHgMs7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ySaSe5TfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zC21hkX1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ENQk3qPrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mbCQMTZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0KTHxvVrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U3Yq4YZBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xu9lQLiCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SbV2kf4RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nn1OhUeKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lr6m0mEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r6GKdEc9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0CTdMv1MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b3TQGyH8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func amR6mq3dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E6fMS474Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKR3GundWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EwQ5ty02Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LmcaS0BGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dwbpvcURWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aZpH0PytWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gmmQtlZbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qtkukp3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m7hWjiKGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6NiChOB3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aaxi8TqeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OfHJ0MqdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CniE94uNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ValxB5bVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DfvtQZ1wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sjgPQoMkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v2DMcaOZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8u3wOTTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XrzbtFNVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O6aggt7iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VfZyf5IHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmeHKUB7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uvKqvwNgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZP0VeXjAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F2ZtgEPnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lhcax0q1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x99BVbCBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X9ILMpcUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sdZf62xsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QTupqqMxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qj7n7mlzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eSO98KCfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GjmF300HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ERjG5FGDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n1YOusD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lb7RIMyCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aDKEUZXiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4yVQwl6JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sCTRmIkcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7kaoi6q1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UwsCYpzpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ePaUD5usWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eXkjZbJhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1pzVtrouWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xkxdZRPXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8irwmYyOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZhJyNQGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ids8JMAMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5y79i2rBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yH7CIlLBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sm5D4dKAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wcKQ13lmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func txuth6mhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swEC1WztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q8u3TfzSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WtWz3enIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cgyr0DwqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MitnIsxmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQjxFXLLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cuwWiVLEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func btWZzVqwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VJAaQD1tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KUXJWN1bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w3riF9rAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T3uLwOr2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SHb7l6vBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FGTji7DaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BeGfz5l8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func diJJ8KEyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C3ZYl4mGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func idY11xKiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hGg6uDlfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H2Y0aM8IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjcfid3UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ER9pu3SLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tlTtCUvlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func itYwmZh2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FpOCHHyXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oRqwzohKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YErwPxhbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DXRNnvBnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wacJcITeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z1vlbG88Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PyVZwL7YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yDkGCamPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dcaXVnAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LUMKsEdFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func puWhmkwCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eS1ll0spWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func psTfVqykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gU0WI2lvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8lz3hE12Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func trxPG5dtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zqn2ZwVfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GFAQLX64Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HbQeP38OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k3DZZG5CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qrcpABXQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UGdlzhYZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xRvAewS9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hC0dPFD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZDbqQetsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eEcIk0tfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IgJ74ZzeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ij9veqVJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func diHQXRZCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FlBPMeSZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9gWKgKL8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IzaO0n5lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KkfgNeM2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3tt2ZJCUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MiX2dAk7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWXwCGDCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0hcEx1YLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H6YkP1MEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SDMTeVjoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WCSVtwzDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 82ZkHPXpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fXuPV3b0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5LYpmlbmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dbJKsNorWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KnsnfTHAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C1YXklw9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func irzN5XBQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rCVIzgZwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XG5fTZYiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1urweWLVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xsje2TVYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 996m09r5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JloByo8WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ifetVCTQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4lAudpKtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hKAJKI1RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4zogHwv9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cJGLcusbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MqIDpFYPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fnvgRXKaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pDVFSLPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KVLDCx1cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tv92pf47Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jPTFaN39Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klJI85SNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4mmj7OaCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WgLM1XzPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C8XwGi1uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 88SYGu1NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2165TyIsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rsN5b0lPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k9wY0YjTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SZqgOYc7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WXdRs84EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cQJICJxRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pMbyZM78Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ZGJ08azWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8VNB2e4tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NiFMhXRcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Cx2PRS85Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x0RsnD1qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4ZzVmKUSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d7sTlPM2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sl6ztWUVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NMCTX0NWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bpQepZiGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXr80a47Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v4pn6KoYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func spMMwiC9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LOdVWBseWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w6H4YVqXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yxf2e82eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rxcYzZ3EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WTxMSnKvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P1zxshNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yVL2ZpZnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EsU8UGcDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDwmvfakWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gw83QFZAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uzJDohIwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LdImhBvJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F59NiYqtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SR2WmoT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N21sknsJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SPXJ7Xf9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pWN2UyfDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BTOoGH5pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dziETPutWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cVka60czWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RuPlSoxlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HGkDml9EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z9sb8KRPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovD5DNQCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0s7srBfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nqr6dAYnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wm2zyVIaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WEqjv6uIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lF7FheaVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LrIpO6MBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2zHclNv0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q7R0taRzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jCONxSC2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N0ELMhd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MnkJHGHtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lQN6fKUsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5rMlpiYfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HjIhIi6bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MBjWFZSrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lsBEAFrJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eK3fNunaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmkKAhmgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0mMzhf0YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yKZXGrKMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R6T5NeSuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HR0XRfyVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R74Cc4ggWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P7MBCHbqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cMxoYtvHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KMz7KdXvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NEYLoW5YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4aRWMYezWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8spzarF3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cn3rs2h7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func afmW3fLrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VyyvKOvDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIR3yoehWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X2zj6jcuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sva9x1g9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4m2FsTpTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b8OUA8duWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PuV0tVaDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ECLmRGomWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WWD3dRPBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cdkcjTMoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func StbKlmDeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbG9xkO4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8rJbdeOkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KXvrU6UcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M9hhka5wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UjRAJTKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aB2S3LYsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FaAdGsn6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Px74ovnAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cm7kpnoSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YK0LjgJxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mapRat70Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func arlnyzVQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1MxjYfWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8D7tN2OqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QhKO1gACWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bs4YR0ADWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wXUkAh4wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5LIS6cpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ysR4lmkrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6HqkWLjFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UxoGUDnzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GLwEaAyCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ad3v94obWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GZORPbIeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func weeZIDSAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6BezpQD5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 10c3VuCfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zzLGCYUyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nj21jZ1fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dp89oyvWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ot4QcuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oSSQNqveWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sq3Oye8oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8v5CMsVEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g1pOgg3LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TByTMZBjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T82NzO3QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZtdWxZu5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NfpAyeeUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UAJIcRYuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uws0DKj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YqbENs2DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func In3IriAlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C32VfgjuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JuKm6pXuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ohugD15dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I9cDBruxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ods3gBmiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lcCzM9b9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dy9rKc8AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OAD4ZgqbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0jW8k2yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yh8RtJUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Z5gpl67Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrYUPXcNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func triBXquKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sPSbpB6tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M0S4vk1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iFPR2RCIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HWNqS20sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func koN8RP3WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BLjoKPn1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 87zQKrGhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hNXtuFSnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S9Qz0r9DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oyWACfgGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q37xP2ATWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2YnxFgSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JF0hFExzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pdI8cR0kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V0aY5w2rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func deHBmYdZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BDwNm1ilWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 67Gby0rPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6wFUxsryWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZEroZazzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KEcZ4G7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1KB2QbQUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9XJonvArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XVKheRe4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fa3ofkefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z1Zz2uQ3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pznBFYZhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mchjKp5zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H89L5sqfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g3tBPm3rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CaPUrSNoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BIyaJMdJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lrvKTXT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jr5fEkQkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 74qFE4aSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fOjftTvtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8Thb1k20Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ovq7CIF8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vJLrq47GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func okkFnCAkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9T2kO1eVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fb4uS6qtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vA57KyKPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AcP43zOHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lPNR5WYGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x3GNuU7oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8sijmw0EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K2elAIlxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P4GcLiklWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VbgrL0vqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6UomgvZNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TZ9gfUsOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ovXHJ5N9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D4rQ7IniWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1cET3GYDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1slsvfQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lSl6CeFxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyIIDwSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wvHfsHPOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4AC4KeU7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aVyUrk0VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fQHV9u99Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AimYpyIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hyjJi3JtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mR7xuYoiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8sh6UlUuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func orsvl2u0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G5cGLFBiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bUvVsXpjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXoY023bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B6ojyqwtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PsrtksiIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KwUvDFW4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GbJXiaXpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LOs28Qm8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pXSD0ofwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8pkkxtYJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 330OzyTEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ADeRE3QRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GZC69emEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9KkOvNbkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qm0cRobrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ednUEhWeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NSMf2RKsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H5oPER5GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JOmoNHgEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PMHUcUWEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IF1BTkQUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZQRvJUmJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kUR37HDoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2k3YS4ihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JveC7ZYWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ylPmrs3jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KIeotxsuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RWM2Os6XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2fEwSgMoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func beTtf2plWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yFGaY7NyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EPRFwUCkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NWpDHdwAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3hBOh7JKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UbOaKwYYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hvVVpscGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BXq0M4EfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Q13tdnPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Eyuud1tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hockuj3EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qZjSvZQHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QLuLvpFeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func htMkipJaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zlgyRf0yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QuLW0ujcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uvITghjPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x763CImHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func grBEueL1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivsYLKoPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RXjMZgOdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xdgcsEZtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TMbDuuZ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcf6l1IrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 40iMWAKhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bsddXGqCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b8BOXDvIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbnP0erBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ymvuStv0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wfxewArVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7q8d39ihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L9EpMo31Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TkxDMxyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6kIFnHy1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ORxbfRovWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjJJuZ53Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8nZovIw0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Sn9r6N5aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fC0pSmh2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A3YdJbfHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gRXR5WsmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ukFrS9rRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N28KJBKUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l0J9khMuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 70PZZVK3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gLRCvCSUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EUPB6vD0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qdaIRPcoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wiAzqGuOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VIDnEJBiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vCxYfrbzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AMOq9F19Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SnpMlY2ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LaQJ5z9AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EZiZg7aIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IYxjlKvMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1tphVnjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Eam9jUsDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SSnEYpl7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rrLMwyBBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KO8e6o4OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bqj1xgGMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ePiOhD4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WTkXaWBmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uztz7up2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CUI36lTSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AkDKoJaMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFYIA5MYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QvPrVyDIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dfg94MOBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cF5DxeCQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9jPCrDFVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dpQEvuVhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fl5vJPYuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hSiuBF3fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VZO2E5paWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6LeH1hKJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func daxpuOmPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VNAeCHVFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NFGYWFXZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BEdpyHtOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BcZ8C21tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jpgfAslNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TYcvQqixWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ImiTw1XPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bkWBNgtdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZJwK3lAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NGgsVf7jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TWg6Q6cgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 93o54swcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wCRAEM4sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9IvnnQjDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PcjKXbfVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 82PEysLQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GPARd9DoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xqnZiwsKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjyf9RqWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j95spXy3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WwKfw50zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzB6OkRBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5vFnwE8XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8QvqzeGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UPVNOtlHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2w8h7cX0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B2sR725cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 28j4Z8bnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5hvEPqBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2i5lKU1SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i34oybPvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HEGsd058Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f8HBWzsAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W7CMlXWUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U5Cw4xg6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iOC51ESRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 47AmXCauWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aujPtOSEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5iHWVAqSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SXnYAPzCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s0mCQre9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vECWsKyrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SQpvH5pmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8gkuIrQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H2K7HyLWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AlQjLz0tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DKTXvC9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dIAe2fhNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w0bBxQ7AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7EplEK3lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pk6CropGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aHR06umGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V2sbZSJOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GwP0xNjTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Luviw4REWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b2hsuH11Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lKoJPukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a12Gp8r8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0EuL9b5hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fwlm64gDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7McgSHPAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mjFp8shxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F4DLyUn7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xBjg3gUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iInFIO0HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 81ny8PTbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fh2kbbkiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yHninpiRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mYZM1UXIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v2UWFYKEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q7df6r7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOPQ1o0WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0R4QjlGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KpcWLNJgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 68m7vMt4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6BVBCgijWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xec5RUbXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZAFPdIgMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TR1SXccbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ekIVjckaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rT9mVvs6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RQaR6FJJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ozXOhRQuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eKHbiNvQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OJUKpCD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ENZhQJldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2JK2fo9HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m0Ks1tppWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func doHduvqMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v9WxjeZfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gjs8KLcfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 57KcSBpwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OGVWdBprWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zY6ejMkoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VIUOfuedWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F8oRAMKKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BO290L29Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KZKkZpXlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9LIHo4wJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M2k9aVeUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zuWlTbdAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LuCJkXDTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XGQzUTOjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func evwjLOYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9y8k1pVzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p0Wh2Lf6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YwCTWzRoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0q0xsjsAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CzgakmJrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4bJocGVFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OQ3PyVd8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zZTTpJoxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func grZ5sn0NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWBw2s3RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rg4UPIKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxmRp0gLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QAfSqT3IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzRlXh0LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tYF5UAYbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mwisCy60Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fu925nhvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cnvr1PrJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4htaQ5ahWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G8gpye7nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z14qSnBBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YHZVVCEcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TRzipVFfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LO7yQqZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BVhJ8KgPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEMUAi1EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pRmLG1tdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tZTFlq4hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U4T3M1kWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5mrtKoSnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4mrbvkQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CD73Dyh2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2GwjbP4JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zL0aZCTgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hPcztY8eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nejBRBL3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W6d84rRrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SBCGj06RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FxGX3AgXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8cmrgHewWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func En8qSGVtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F8aV0uBnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2HUetmZTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lko7msXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kki5Hs3KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A6qVrmtDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sC7L0NX8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HZFWl6tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBBkD2OFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UdcAP5YNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9CzNxEByWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kKLC6feEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w31jGrPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6qTntXCcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lQKNM0pbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i1hSVnIRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ld7RUuVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gDFBFfqZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kOXwmuWaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CJ5Ej0uaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9LGZ8BC5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bTsLExRWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SNw2SglfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2lBNsVbZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DbTYHIaRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HX2Zh3CeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YS930PjWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HbSeOHZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aOsA39bjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 155kgcBVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giIBStMWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pgJZXsg6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VGQ0plyWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zmbLvQ1nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kHB3fmzlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hPEYDCOQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BmlBqcSRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DskhE5hkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aTzJhGbvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YTcWobr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yCcVGwWvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcYbopOuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IH2xQRmkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BqoskrElWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c2UuSupVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O9hwclRSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AHE7RneYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Cpov8aZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LTsbJq7ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V0B78d4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eIduJoWuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dtyG2dmBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ASlJg1uyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func poF7x6QWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9WsHBuuyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ILel4hizWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZrpYtNxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bD2ZZ6qpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u7EaGYNWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0mkA9t1sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 51TzmgQLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vgc37M8BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzS93mdcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UHKG0d4DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xZ9GeqjRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KVPUwn3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FUedztZXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwVCv1wcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PemdVxDkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KCHuIkw7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func En3qkS2IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FJL7u6EvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6a4UhsOXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HJVQJ6YrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pkFnYaCrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6lAdE9uIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0J8TdS1nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SEpyfl1jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QNkXULPDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ixxNZlXvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BQvliCFpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6pIatGq9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BZhR6MzLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gTTa9ataWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7SKe4SvtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v50Qsv2zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mBtBB2Y5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8ZdL9LUmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xK3NnCgIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TcpvbbdAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0tZXyqYJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eY3MxTCiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YOws5Ta1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2MPOiJioWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8vidlVWDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sgc81soPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OcCHuI3qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Q6C4APoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ayhuy8CoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OIM4U8HGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SwcScR5qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w5j2eSJeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y4Vr008SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OVr861hoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wydqlhhSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uRCHPN1TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TAgAk0SDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KfOwXNTBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oWBC1D7sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xKV3AhQOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P3UGZisYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aae9q7GyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nwa7wzPbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FAmr0jY7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qj5oekk9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHHdBweIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ix043MKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MGGyiYsSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v1JqhXRBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ruXluzKGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func grGXvSa5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uActLUT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DiCwNvodWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DhPGhStoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SPBthZAAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uOrSxGuqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dVjEynGpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E4GOBOtzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDQ6OTgRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7bLLuAn6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lzniS9kyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H5zOmiPkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x6hpMbpwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H0AE3jAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VErWDl1zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BHnfLgubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ojHlsJVAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GOrO3VxNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6zhIJtzOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func haNqLwJ4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VAFY52mDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gfy2o8thWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func im2ySddBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vyx42W9ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6EAD3ruQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FjASNbxkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZWFb4le7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2Lc5DNBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mdf64CZBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bFJHhiDkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l4KONWz9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KpWqu9zCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9H6uZ7ZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ClwqJRi7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MikfAmMlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KgZc39a2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QF6WRbIPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CmschKxMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QdotxGHOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNFcTet4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kzjmdxK0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CKrbHVL1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s1afy9yYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDhhhfiCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BRcODLg0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pgMhRnT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EWP0gS07Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ttf9IJpjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tBDKI5KSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IyRtJ0zGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 912LHeWLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b7Qd7GZdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lMNdwq7aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 94cpnXEJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SMmoksJSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HvHJiqzhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oV047dIJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ieRgbiV8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z9Zz5zqVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jUEDdMZUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pMsm5GkEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aBAnD7a0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v4dKPf0kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EDXXDQR9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aNCEZsfqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L7iHQn4dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2t7jBdYbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vSylHajpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4AyAgX4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0PTjPFdkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9483LdefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func llkc1NmCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CJAQCTLUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9S3Qu3wLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o4urZxZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8uJ1GPqrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SBxrsRKWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SNxb92WkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gX5LGad5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O19UxYqKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RpJAuw1tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B0QBxTBYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SbXp6yVnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Oyc3dQSBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hS9ZzDQpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rWSL4tqBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R0znTiOLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dJwrjZ3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CfDddn4ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LUzJGhGwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6uwOV05bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e95rHG47Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UkUMJYaVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 81sMOwedWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ScoNu5bFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tjHVAkEGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L6xLZ52RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4lpeoxKoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R3p82vTgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8zNUFCLnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p8qYm1grWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lrmFMXypWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Ej8UepFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UE8iWmygWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func da6CQ2joWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SgnkKLtGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vsV3Pm8WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0vs9oL0zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IVjwGF9wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Waumw92sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fux5iGIXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZSgsKsEoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SOvtaJ5TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2XiyqYiEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1WhiCfvGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iU3iNmomWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gaEDoXjhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F5ntmS9LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O2rQ0zuZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zn91Ryb0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3b8XX7JlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AMdYt4kUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m8OHiysZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8Oz8BjBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FB65BK6hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wpcWMtqgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cEQvV8uiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zPbE2gAsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wRDD3Gn6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UAOCJpubWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sQbihD0eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SLDHHaEfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xxtIKu3MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7kg4JdUaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dsVoaq64Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gdxz87ZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GngrmUfJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OLPfCCFXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tFkNKZvoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yceZ5ldzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xyjnzPTnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3djKpxHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LzLlT1p7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hEXntlfgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func haq5t6l7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vGj9XlBIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OO90P9ieWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ESTIVQOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func neJ197juWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xi4RG6l1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QCfd4HDRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3NwGEpjTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qL9XC1YuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q3dSZAsoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dXOaxsQ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m5rVju9mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YmzQLnu4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SyJ6soPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aMKuFHqeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7OZ3DYnfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mPtR7YD2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D5CB51KiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x7X0vYLYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSRs0McSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qC4pOvPQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kldYx3VUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zf7nAMDrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hLiCPuY8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jCREk0zyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrqE0U5mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Oq1JNcnoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wfa3SQueWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k1fBzrvDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kWNgT1x8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2lUCkfPtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wi0OTxD8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VH00uxyvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jvSkhorHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jm7Jd7I5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9vH5itnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bipn05gSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4BDEfvKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MNbqlV0UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SxudOXGKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WoX0NclIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T5OE5REuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Yapx15LaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j6FDfnItWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4S0ZBJfCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O5O8m1wYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fQrXUa0ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uhNa3S20Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ie8di8X6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q4h66mk2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VhD8rVigWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3eNHLxEyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6xpD3vLmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ToUOdajWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iT7EYjEyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lPMsUWgOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MpE6u8tlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uHXqDodYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uU0ZJJFWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SbyLeIvhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2BbHu0CHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zBohPMHiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mtoRyqoWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e6qS2DCqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vAL3sbbkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mMsmzzREWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FcYQgBaaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HugDNuRQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gsg2iJvGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NAuL8TvuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ODs89n7eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KqSWvd0kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y2we9m9hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UIPoYTP9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AnHA21ruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 43Hry06xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6nYyOVQUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eHcS6iHGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sCAlBfn2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iY19ZjowWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AR5qhi58Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MXtpEbfIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mlS8CHvRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tMkUnauXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pKwYk3afWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rjBGsqdPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4VkNA2CHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kS0XfVrgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KD2TRu6lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dHCL3iP9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NTtWDUbrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NtWbHbkHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VzTsQioNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2NRr5rRoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKGE1QNrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E7MlTiDHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qnca998yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bqw4NEeLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NLVMSC2AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bs5ilSWPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KQBMLC0bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dz0CtzMBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cwrzblMiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IShncMHfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mLt5uqnMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h5DMP053Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MjoObfMkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yWsTr3nEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6loRlN4sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NNDZuc9wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vytUkIa1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OTx6f1yfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 199TrE86Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PuRls2qsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 258
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func juQ8SyjEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tx5fh2HEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VqdO0UaQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7docci3JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N2z8LSFyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Wcea6bvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PZzPC2avWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BoqhMxPuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 37l34PWCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ce0XwHXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rLYrIxDlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FLUFNV91Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lpDJ0nyLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ANDKwIzWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UDTtpQmHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mrgrOBm6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6SyZnxihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGe4sW5RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VvQ99336Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pv5JAM9CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CZ7IXXmDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jjGwE1yAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CSRluB7bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func st2ObsrIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func alqA6bMeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vdBieypWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 04tILa88Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2v33AHYmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fFR2qlYHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zO1DsokqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WMQMZCRKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AplfrnL2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V7nRZku1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EcZazaveWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 26by3zlmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2aBKdOoTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ENCeikUQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ryZo1WQGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fwnROygRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kxFiz7yJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jFluPBpvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func usJPzc1eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func owNuvyQDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nttkUrcgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CaVQu9XuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vX3nm1kDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iudszjeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArHWCz43Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L2WNrCObWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O0cJ9BYNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Dz19AeVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func usT5MQQQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QAHs2MddWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xYu7VRZzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ODhuYInRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OohKXg3jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BsQccxqQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mu67JItOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hglwxAKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mIhWPw0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k0lOJAKRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p3tOwstZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k46SwcIvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I2cMQ0tZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZNpVCALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lQe52KVFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VhlEph8BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FozCGz33Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0I2cdk9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bbxBF21VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CWdWTBpCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WFYtfxTLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VnokhIW4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWoN17u3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4GS10shhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oMdwtYtpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QM9a167VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GURWBipwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q1qN62v9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Trq0aptrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v5HrapohWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JS8auALNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RlBxWuE4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RhsV8b1uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OCyIVOTMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w79eLSiKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qf0uysaWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jxFT2byjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yja7zrjVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lN3bzeUCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3tcmCq86Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5g7JR6IrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bMEnV5S3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WL4RngnIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mw8eWgOAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TkR4SOwbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func soBGDZ50Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aPu9kHMVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nhl9h87EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vMGFDETxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aqndKCOmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5qtRHEojWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ulHNwWD4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WJdYXkumWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func y1qgbiR7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GJm80G25Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NkUZ32ogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p8YPzwBIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6jAqzYYAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wUw4HR8XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dsGU3MJ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2lyNiGLBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yInuBikWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VjpKde1HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5LXLIyQIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eBH3difZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gNXYxQZIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OnoMP2NMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DSfABgj6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7fwkzI4PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pPGGNJJCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BVcmc0tNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ufUFfDo2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JzxqlBImWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPNLmSXCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fbISt11XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TUYnJAKvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2zxBZ38xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bmgio5TRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SEbCgvXqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SpP4klo9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hqYwd3LqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vMOR1pJnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OW9Xk0V5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d1MYXyjRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xc6kYwR8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4cn4gNIcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3DR4yGUTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9VXruWDyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jgQLLL20Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9mVs332QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uKrZghunWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oslqFdcYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a9W9qrcDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2F4RHcjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VyRUTXSsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B5iLmMEuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UI8RhgPDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxbm1HH0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nAHkytqTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z790zaURWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func reSz890MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NdAX9b6QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5N1hN3KNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wXUtIbsoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WFX6bGzBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vv1YZppcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NKvuNzEGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c3wg5rwFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4cFdFZjrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xlZ4Q8bIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yuCFqXJMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GciauaJ1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CFwxqFRoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tz96hjaQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XnO029ycWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cguc9e1FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQpasmehWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KX43aMTbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iFkC2qrcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IQMUleRYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ElvBt85VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTDFcuHDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efHMGcfgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5OuYD1rEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TeNPAXqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rRrB8VSwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ETMMbNgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UGNCAvMbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZBasod8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pIxJKXdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I8ZfoTrqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H8Ohq9n2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ne2UFFGeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AK8eV2MaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xio2IUrUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UxE99QAoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NM6SRFhPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n3AF4qVSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xcGokVMiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qFBJ2zXNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aed0jLb0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIQBKC6yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gxPj33AvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1jGfTatLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8nKTGZRGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rPNH7AlFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func satuVXoeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qatFccIVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s35lZbAkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PnG1CblbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8H7aFyT0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pZ29PMOTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PlCQa85JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MI3qYzGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Jsvsk2wcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wSPGCFLUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7omJfRQgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ycRkDGAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cjell3ayWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0XzmGWM3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N1XqRROhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dxHmT981Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func olvN8G9mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hffJdSvqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TV0VX5EEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fiskQk14Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OrmfBthQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5kjZrHEDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oyRkYvBFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wi82yJekWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r4xOp4ODWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yoOpLT49Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GeGCbrPZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VQPLwKT6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ybc6Dk2PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zvuxLZBeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ycPV5RVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GSuQqj4AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eXTSj1r6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9lytuchWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 10AJadBAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XIYsJ01LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uOPmmmq7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ps5QrtgSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ywkvD0FYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func phvLUeIAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vEVpTqXQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SiZWGm5PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qYYHPucDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r1nei1erWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i9YP36tkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XClhLhWCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c1zLe6LHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pDHcpNyNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4YMFQmB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XPs2yUqiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nQRshIy1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H6vcyS2AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CeJ4KOGcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pf2tUw3SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pbUk3qHxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GMZIDu2iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jqsBrUA0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qnjSpb4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jYnZQeZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func McHQPz2RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ADNy8ZaDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bGUYonXQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WrDEpa18Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KEHZ4XFRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 89049CPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B9vnmgldWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EO1cqzu4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 83ysy49pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pJH5gfWwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UtFgYPmWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rbw3QRUEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 29PkhpykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EhUIKv4YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2vZfv2tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FmWoa00OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4f3FPQwPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W23bO9uLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xvVCaDYxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GZ9grKUkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2crW1aYMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vJMcsuVFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8IbwfAbmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WdVFEBwwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dhCRvdNFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WiYG9PzEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j0jZCxUMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efO9IZa3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A3hZZ3zwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dXM304l5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l49FeNGFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fBKmSA5YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zYdTNuiXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func byGLFANkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YdH6kQeCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hNgIuRDwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KYX4LxlHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7xVSSb6uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dlF3T0mGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mi3PnFPTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vaD9GjSKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QzovZCs2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func la4sR4b1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i3wd54enWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ENy7oq6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bQxkmd7UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DUnim42FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LYliupwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d3MGErboWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yHYW5zI8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7hTjwSiLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9zFm25YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dVLSNwotWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bq8JC8ylWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A2OcKlTJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zDsrKD2TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func swwVPptpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HGLICLjGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OL4jh5UqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFUILZ0VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func canfJn2YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mHwZ0TaJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lQlzZ43OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ziLxaEHYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nuQMSKXgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R44LgRJuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K9e6KMy8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ljTjXFNpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JeJHYj6RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cOgQFy8TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nDkmryQmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0lUYRMdPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PseWTj0lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a4HfDJQCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l7G4qg1uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1credu7rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4DuBZwCVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BYP8nLDFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rrcebfJBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WxX7FTpSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XfOF1fwWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iO0ebv2zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OBpoA9tOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewPyBz9rWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V3qtX4OPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jEha9A1tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXtymAAxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q1hDbgTnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NE8XmlE0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KGJAf2HLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yGXwU11bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cssksaNxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TlWbJNEAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2sVeMUGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ot9AjdY8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wKTfyJEhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6V1qMixSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0Eh69r7RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ngYOUlM6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func osfasKYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 19AUs6R4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0qvN5vJ1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kxpLK6BOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func USWsdbgzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rp7oZ90LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SovwHO0KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6M98nbcjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gIZ2hHPLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wZ9qPfARWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LGzBomJPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uI5FbZiSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s8Ncav1JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoKka6TlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hDXSwni1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z8mIyNzDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 022L6TRuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cvbTmeVtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aLUZwOHiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z6OMaM51Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3wBoKKyfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7CPq57mPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dIewby27Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZLHdbuz2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nSF2jpukWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v0ljrVyHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRtm03EdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F8R4uUknWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uWnojmLkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ynJPOaUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ldU462MGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rxgo1wKyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zGcj20oOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZUHS6pQ0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vpxEAfsIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JM66mAfuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lRwIILWOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AKXy82YxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rPpdsOxkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V8OpAdHcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rBxRikU4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3NhHjRleWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbJRQnwCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mdblIpFgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLal2I7QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zJiQbwaVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mvONNbCDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ayuFuJkOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gkUeATKSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8QKntukEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ic3l0UMWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cCq8zC5HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t4bNOERbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5KLCeAkvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6BZNBsRmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CYsYnGdlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iIVntuuUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AxtD4l2xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ncvZShlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fVAYy3REWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ot8km2JVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tq3zxK7WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 61
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewzC7eulWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LRr4Lk3JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xpNjOzspWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P43dEHYNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PQi4VPfjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5Q30saciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MPD7WSB3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LXVq5HmcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j35F9xFnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GY6n6ybzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dEuGRm7qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a10Fnzh3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XqZvZvtLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oGVZ43ucWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jJymmS12Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kbjYW6v8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7BfaTPhsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J7MezOBoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AvzCQel2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OYF2Km7PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2RVsTMSYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XO7TIEPgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WU3ujWWHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JaXYwcDEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pe1U2jsqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4fzj7zjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0tLyu7tTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jJuAjuh4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C9xrSYjgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KzWE33MaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n0YpM95bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lmInG71DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ocuD45nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o6kEgCZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AYfFFF76Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mgtqsrSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pN5DRxibWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KSC0Js2wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tUC5YwXkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TyzcFAd2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uCK2J05BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3JNwnIXRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X3qqsTf6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OZlOEzn3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hAEMlKO6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KbDKYnhgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dMJQqYwMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4cPbsWeqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3nAgPrZaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TYalthw2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z64uMtpnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IvXAMU0DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AOB95ILFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P8JapBi5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9ogWty0UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func StGezV3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p5scUFKtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fSZUpS1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 98AfZsqGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aILHWJZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Rh5jUmQIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S88L3OrjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1f6R1P5bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func URNrlRH1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sgJexVSmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6X2KxezdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HnHAlfjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GAgrXsXwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VGCwV6ViWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xx72amMDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xHILCZpjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p52Uo2JGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0bX4WYs8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RYHgm6FjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MAX6bjRSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 66
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ipPMez5UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hC19IGEHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HbILsoruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zqwzDu0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XIjCMlbFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y4EzvhiiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GeaatiMnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5aTMbDQ9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z8eYIPtbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SiTn7ZzPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n9YD5VdTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IgC1CUXzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zfDVsv7UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H5iMWSzzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3744DfHHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6R032EzgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mHb5yxRhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nyMFXGJEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xc06BygBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mc2cEtTyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zMTEZ1LSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U7jJeFCYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L1mqCwKiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tjlRAhWfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XgvMKa4NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aldbsu8KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U8UGer7XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZdHHYRXoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TXr9QSgIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VLVpC5FaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D5L3J0Y6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6xGAKGwDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PsXPJcaEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xHoA0VYtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zgLoMfUMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pfDnfrVUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8AdAyl4WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cpmCrGSyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0eKRo69UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a0kqZdo7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7YzHKmf9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qRbpAlRFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XYdPjsM0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RYE3nRciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u2jVtarqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7sqUiMfVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q5SUSnP1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HKaCtKdZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXUQI9eYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XJDM7hIMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C077gvDCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mvQkmPpfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNeLlWIoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ChrljrtZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Iz5HkYlWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiEN8HweWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4RarfJNHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func irl8BY4EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9DIHMU6wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 08L0RJTuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3HTfKNdpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 39rNEvSyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nNhJXc5jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UMBQywC5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J0UcLR2TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WqPajXp0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hFNULXWjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZSMiImaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ohEXq2kwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7uxus7ctWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iTfc1hCfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AyxPXjIYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lpPStJKDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jecjLrDUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aVrk2SCtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w0JOUz09Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eLMC5INzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DGNDYwMLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cKr3WYY1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 020TYLaHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uTxZZgbKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cJCZqpHsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5CADooATWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qiZaxxpZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D7IcRkQUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MUHXAwJlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xQZec0RSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qwACU8f4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4rywYwKxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KRrSPdmnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Piht86MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EA8TcqOUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uqFqKOQMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L3jlgFK0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rAYSUhjYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oR0w9SmzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b3P9D5YIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ITMIjJ7aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TJ1W54RrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func teQZyfogWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3Y7D5p9sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u2nGm7wNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3gIAjvtZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2BRiDjyAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g8hMXRKEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eq1vB2QUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MIRxU6JhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cXydM9kaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rTftmKOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0hzcF4jmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8fNiTn5VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iRD4KtAXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1kYHQ2LPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wMoC8jnMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AFslAv6YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fbj3aSSPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 66L2k5jHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BZS1bwdbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KAYkNBAXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F9EcoRpGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func P5tNveFjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WO0qYBYdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HiMGqBspWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIhQgYcEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NHcCimYaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func scwt1K3aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pd3sBfH7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UNyIHwAyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lm9lOL5mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 72
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zDIqfERXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OCi2vRMxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OXjLsOuWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xOK9S7Q4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lEu4foFnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pR0hPxQeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9HzQZLXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SVnvFqinWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6vgAzpsVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gppkwc3cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xfxoFeX2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4qZZB561Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I5IFPfbkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func os4eZBjJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HbY5eq0qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pk9SBCGBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tDQl2GUNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fU8vvBKGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDBpoCynWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vxofxzlwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WLyTNSJqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IrxlZhcTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DYVAQzOgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rbc4F7m1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IJ31gcXaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yTOCym9hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5wVh51aaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bIsXF6ZIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u8ZtSHiHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xTs2RBAtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AXWveA4eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vBTkoWGBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lbYKjkNpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dBq7CbieWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bJNmoQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pVuQgfC5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func efKKtW7tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YDQ7dmvdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q9TuMMwdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I1EvTXOzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HHvKtFYfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qddvTtuiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mLnVwYg6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bQHPmd3jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j7NJ8ZuZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ai7B4yHhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wMUC6TFkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zemi0PTuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TcWPQTSJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k16pnUsLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mREsIdTkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j5Q7esFCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v7kBfyzUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dy3fGNWYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func axJk94f4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7EZKCUGlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CByBHzJyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jO2YWrU6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KBd2HPg4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func agHfvjYRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a3ntVfA3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QuRxnRHKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mRqXD7zbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eZvQcc7hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DfrCp8A7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7iCSfMmuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mVtP98LwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8dKoaeIPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ulimVSsPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xdjEvj01Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SQ9nBsHNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1IIPOjAwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nlr3rZbcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ST6RpQk9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CcBixuiHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jrZL5I9RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1ikaHfoHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2ihm9wzqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XNzZOBykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1CUkbtfKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JwyjYdaLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pN6FcLj4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bSYROEgMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qopAyd34Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qG7r1MoqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zxAE5MAFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fgYrQKi5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wNKfH3pWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vk0eB0IDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xASWkuHbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GX5gEmz2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XftXTgkGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CARHMDshWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EbfrU2r4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KiSudk7cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1IelAt4KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ALKfcPVeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kHj0sH96Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mnb5pVJhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3gGZWAuAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Arwxj3oKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fmbXGqhpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OHVWyydAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y1HYcYiFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NE8fgi6XWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xUv7KZHXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3EAV5kUPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2q5UAiuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ainVkpINWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 65SO1wi5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BHm3xQeaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 578jHQsPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7wDmoHCIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TccPxl5BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hdZ36bS1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MKIxeqzhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FsCumm6LWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nAKqdiSzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RfYzDvRTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 25OpxqL5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func u23znYykWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rwJyrx3JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H8pUE4mkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func azSBxbnbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MJh6s080Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BTUEaLTYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9cHWhFrsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hqryb14bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VvUMqwOEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KR7Ih7PEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QTrTxsVBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KF75KvLtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2dujgTcfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lg73ApfgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iGFFEBPpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fRXHiWpJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JPpG3tT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y32TTNALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fb8f8m8dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zb008KwWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wOjAGatoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func q8xWP4WbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TXtlVwXqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qmj6xUYwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DbSjzdexWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1vQEPYh9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0xiytEDsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d5ZN1Wq7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eGbgdzteWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3FyI8cANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W7e7tDZ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D346EMyyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1yXcnNtVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func utuieTKUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PUU2EDreWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ozu9rhcEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VLbSot3nWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C53VeNRrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o2Mvqk68Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func twFb6Bm3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N5SaDl87Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zkq32W2wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WVJ7toKUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ph9MsWS8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6Nx93v81Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k1j54Dc0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5cAoKenRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KLFfEKV8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DsBgkEhCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9fReM0uzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwXqHNJrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H7oB5yk5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PUjA8GdtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SSK08DGNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8UQPN07Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func biGBtZPiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bXsVL8txWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HKuxzQPPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QBRhHmB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IQed127vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zRkpOdMOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQIbZ3NxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QYzH9fFZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LCEArAE2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YNBXi1WiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o8We0SCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xYEHkXaKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rdCPKD4gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nSggOVzjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8XfFOAlcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZqWfozxQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BIa5umZPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m1ScdDLoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gWKxcXHeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kYEGI1ilWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SFZCUC8mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f1iBFUy4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yAgnMT2EWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WjqmLILLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I5U7sbgLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cGb0XcEwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NQaNRRBZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2gvwXcriWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MiL0NSy8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IaQGtLdMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y8uLyLztWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qawgdmR6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qFHYFHYMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tFfyRoEtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QJuroEwtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QYb4vG61Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RnK8OdXEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V39x1AjnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N9W3hmhxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e3QwMlSQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U1EUcbkNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QQ8lFhdSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewentjD1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dwXiXct4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dbIrJmb2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lmy5fT2IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ULuUj4qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3HDIoz4SWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nk8I20GdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AxtoAJkOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1cx5J62MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 261
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ECNAOZ8ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 338Hg18zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f2xzLDwQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fKD4eV2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NVMd4T3GWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yBfyLAD2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bVqnUBFFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aXnr3XwzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KEWG848IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gjsYZDCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5jjjShjlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jwt54wxmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qv4JN6LQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VHrzTUn2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J81hWDEUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BOJeoWCvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tCXEJOOGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dBGochmJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qhgljsB8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nBljzb2pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QgiMDoJ2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8MvQaAkpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 26
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lSDFINArWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LTMKbzuLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Elpl4bwbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i3LDr0cnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 100
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x3SYGw8cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0e8Qve25Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tHAT3YVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DHmPl3pPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EmuCUgPiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bgY8NgPFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LNYXaxp8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e6CTEQ3hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QiwpJxdXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J0OasRqeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g7eCsgVfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OIrSQacCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pbIEt2scWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EgeoyafhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FeQwl0O3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W4woPoq9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hv8xn3bNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8H09QqrFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9StMD3H0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GghkqLejWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func giC7bGNVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nY0KR9glWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 14
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yglbxyQJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7brPLB0sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3iskfT5AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 69xWG1e0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EMtV9VNCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3R2RVOsfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zaWlFugdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vHz0yV7NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IMSuBW7FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A03Y9MkNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gZQiKRZlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nq3FO6uEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CjmsmISYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gms2F31oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fiTmwTLoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NBLkUoOoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GEZyzGLjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qmdtwPBXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BOCdiMlkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IOu9iAdDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EiCZyxWBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ge5etry4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hCgMgFSlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NqfOfSFKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J0Yj3iOQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cReKHQqZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ivTafLpoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vyp3HzNBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G9OQX2NMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SoJ9s9wOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aM1jbasFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mhW4O7sfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZwBE4aNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z41MDe6wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QnO8guaMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T8zLq3pjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XVRD1l2NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N51HAPKnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZbvwMDjFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aljJ2U8zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func n2MH2wkrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gMRgW28xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hO8fu6IUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GjxyBWSxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0UItGQsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yHGHCjq5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 217
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R94ceO45Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ueXDD9cxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4fP4bL5NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UtKC7jzQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0GIuT8ciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cqkKU6XjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tPCFXhtBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O880BUUTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O24Q9WZqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oxYj17gIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MJC8f9n2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lQMh172xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dmvK2larWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PXtAlUWiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fFkxGpTzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XJqTzoIxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 63
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0IaIT7VEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2R9uaoQeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 256
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDKMTJScWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cYbNFlceWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lIu1FDGpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jS6Kj7fAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4YHFGKgZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1eekL0UkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rayM0uYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v9naYcjKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7zIsyKmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M5qCfopIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wc4tqPbQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a5gwJDNiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eBtjHRhfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1l12MSCwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0IrCTtteWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OOdsV9PzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 68gHyISBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DLOlBS1DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5ruV5vyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rgbxzK50Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 139
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4rLni1mBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func URpssRF5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func goUF75QYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WDjs6P26Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zNxFUBqBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lgauRRzEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dlfYBlCiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MNhRFIP4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U9XJoNlPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wn59Q4ZCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AcYM0J9IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BYa0Xcq2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E6xCUQqHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cHJFhon0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OpUvhu8dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4nnwisWRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func N6EbFe9tWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func icf591pXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j1Y0EZzvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ewQOgkJIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1SvrkeIdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hMUyhgbaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oQePx2ciWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func escfdGdsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V9AxTwKfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iqm9pt14Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TH1a9H0MWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZQ2MLw6BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5zRkZGnBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lmmvmtr8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XxQ74Y6bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U6cFDy9hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jREfRrFHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func usv3HzWFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dqML8sHLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1352I99bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GaQw93U4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GNTEqgo4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C5HVK3fVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4IGv2ykWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nwo4hKgTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func epelqcZHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QJeV2RfkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qRfW45QIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zeJBOPhhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 252
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oLMdpIBPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 157
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TRToQ4HiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qvIcohCUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qMq2pjTgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nJxzXYLRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LX9bEWQLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rFMgPsOvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Bb7RMW56Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 71VBX0oSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4qdkSyqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WGPcR05sWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6KqJHtbuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 242
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Aedq4iT0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S9H4wcmUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXc7Klw1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bsgwoWkqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VeqigMujWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lFPuAW1zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GyDhkBHoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gJo0HKfOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2mjCIcsMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EPH4aBPVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VnuidW9NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4zlCpFumWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 194
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ljeNT0c1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wXpn5uNcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V7MDau4jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FJnMtacwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DdiPnQClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pXnV2kISWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EtmT9dGKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7zVbLRqRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OOyP3krxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qoMHhaj8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1gHO8K2UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TdZP5tExWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OHmSkqp7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sOOaPgTDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 238
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TxXzCioUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EEfcExzuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDoIriO5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4mh4SnGLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PM9u98oqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GmWBjTj3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pHvqjsmlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UkyMb9BgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KV7KWqq1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ps0Q2jnuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PrfWESRiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YrAGdMnMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 80P0XB1HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pdEcNyhHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K0vH2xdpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9NBCDDHGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 106
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Telgoi3FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NlGWnTGTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BrsZ0jqXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BWAgAZp3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 58Oc9yWyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gfZxBqjBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NSj9CVyIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lROQVsnmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rCVp5vQHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e3HIYjtrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g48i4N47Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 59
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BiROau93Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fRsUYVLOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2LgDhyeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 280
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dioaYiJ6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vOd2thadWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6OUQlKn8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YBE66iZcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q3tIY4idWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6ZOQHseEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0mkB7BDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AKBYSdFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Td2i62JOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2UavDeHqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 266
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ANZJF3edWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func icJg3ir6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0EO6VxMvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tHQq2dOLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ybzE8X4WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9bnv6QZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VDv80yd1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Dqumpu7gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 16
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SOQ8gIIBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IGO5XPKMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c8h6YDNdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cvTwGXJDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWXQzkzaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WmMEwD2KWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5zampu0gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lKEGF52kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cil8G1TPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxlQ4vq0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 92nBOQshWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V2zJGgcWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oNeKRvgiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func txuR4M73Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CBbFJuClWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QMUEXzHkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A2brRaDFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QlmGxZXcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oL2atQERWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aLO3HOKuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oY8UnzSAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qyv9mzzKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5RV2cOSMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MSRLhabUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TnFnLrj3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ppnaKlyNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 29
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func L3VXOULYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OyQ13z6WWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cQ9lkzKnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VqM2bvGkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sj57Z09VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NY07c0OzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ArCmyokIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MFWQIMxQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nqv4iYTTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9xgtsU3eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kicpdWoZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V4C7IwllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yfpIVNBiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Qd4PKoyfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SggTy97RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z7bjFwhoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eQX98c1PWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OW5CGyAGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 37
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VA15jwaYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d7xhemMrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func a4NB9MZoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HH9djjItWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p2TJeK2JWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5VPQPRihWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MzN6HsKqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BBWDd2lIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uaj9WAAXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qtAkVO3uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kXXLfmVOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uyAGInT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oC4yut4UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tVlDczJmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r24zOgS4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pXmUhvLCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HnTvVCuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ztaq89CMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HR566MfpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9jN3Mf7kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JoC2cvx5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OXQDz0NwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MnL8E7lEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k8XrpcDXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xV1RWTwZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UgdXQSQFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G2RIMJuGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pUMCKLnyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kOMfSxYFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FHNkmAVgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTWFq3DjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lqPLdAdRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PUqtuyDNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O2UjMzZMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uJdPZDc3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 81
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RKgRZp0AWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KYFdTtosWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CgGuWGTuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x2Rrbu08Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TVh4CsUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xJMGUArAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nbXy2v31Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kyH8W8H8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qCBEaj68Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R3lv48MuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qpIsdHfUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oLRX4RzYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WSKOmGVGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yhw4A9ijWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 265
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A8Lg3vJ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func T1pbIHdWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWxo8mk3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ubiEJL6oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZzRqE8FwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func O0eqfOwNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b7JNYbSoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 66nd6mZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NTacY1ZDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fLWmyoQKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 43
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KygQHdHzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HrP2APp9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 18
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pgx109JgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1mTNrYsaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IEREDYYzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Grqj4f0bWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XwzqEM4IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DzddRObXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wkPZbyRQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MhJuPKZ7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CftMvSeLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v612sfmVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tmAv5KbpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dQFfae2fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 105
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ytrNg0ZwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DsA5TWwCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fpsOGlnWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sgyHXqPrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dze0ZXtpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZB3cJekDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func shQWNRvxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pAukxXVrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func psUeEnn6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 181
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HczStvrbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 121
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eYlqNIXAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S49iYiMPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PjfM2FB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r8G0gD0dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 153
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Caf6tQFbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func puKTWgIQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vaFQDFlrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vi6osefOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5QhrfG54Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JALefFM7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func inq0jcPzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KuRGxJUkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ieQgA9BiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UpbnhCRkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func H0FlCLBsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AEXqqifjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vycvRJevWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ez8mNAw9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R1kxzPWwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5u5iwqFsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I4moQ44dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MQVOb4nZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mqAcjK95Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LjORUyodWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TitvYIdDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 867zajpPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dIN6GhmTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 207
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z2y1PoXgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BbE38YwDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 130
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i4siIgm2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jVaaPOVVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W1he9HF4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0lcH2XzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fAj2vYYjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c4wr3rh3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9Gze4t8qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 263
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func asfrgdBPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XFRixUkZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J1pBMn3HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3qBflxRAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7ZLGU0nzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8BcqSUdJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZXmkCvYtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 286
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r3er0RxWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pospVfFUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rM4OoMOKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ot19WayKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 28
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZFvp97vgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dEArDqCLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FSlCgXCdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ezJIbZ1RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ylR7OmbiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XBDSiBrtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TAmnLoExWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bwqzV1vhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PM0rAeA6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iU3FEa9NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aMYRaH44Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 123
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func asLGmrzgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 95
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YtkwQN3IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 227
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9bHl9hYLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hZ7iLLBLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aH7crJIJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f5jLiwIAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ep44G4hqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b805ZWrRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zesd0DT4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func thX4s08kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 55
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DX0GLB8QWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F2I0x7xiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 75
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jMdxUpkzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func G1VHRjd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lYEbVwmOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JmpAwi8YWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iV0VZnrSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NDSTrfg0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wpIeMRp1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hLd32gxKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kiIsTjFpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0I0yjtxnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pgl2IguRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OoJAFh2oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8eBSJj7IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ufDn7UgQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NkxsysWDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pDmHzN9VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8SxLpavjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XyJb1OIXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yuT14Hx4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yfN4kizEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HXE60THkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 03ciqrQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yUzwQ5TdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1x3dDvy2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func klLGmsyGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fhi7Dtn2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 111
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l3R2xtZGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eWFVJnj4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5fd5hFfKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func umKeC0lWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sdHriOeLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zG4BzlF5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 282
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sGCFtZQQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uGm5ZjLWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UnUQ5p9FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vjGvklj3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5ro9EVOEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YFtGtu0jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b1PleIO9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wu9AG16RWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tqvcOIBpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aX3qzWlTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0uFg8pALWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jAqEN1riWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4DZAAMr8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YlRp9tWyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E9xkLc0vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JaBVAqlyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 281
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7niTDOpCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 115
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WVvOqcymWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 134
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yskBbrjGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 279
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qzhFNwvMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jpNLuUZOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CXkPIuvPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AzbloZCzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0RsCke2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hi5UL8JxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vApdrxKyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VfOdErpAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sdjWYh27Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 85
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gXPn0oUFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cvf9IvQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gw1yihFOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F9Lq2GlNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gKH7iOrqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SR4uT8YlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4fGkEvwHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NwsUQfJDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Abq15nwdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YHCRHpB4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GgR0pYpGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2X8mi34vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 277
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eVrFgNy8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r20stLrfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 89
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X7NPu2bPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2KITbBb7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5iKdY5VCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BMBAfadSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUBopxAkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d65RmrbLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gCwLQZ08Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c8yR9fqAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ugLOVEFdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WaCdJ5zdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EZcA2lyCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 207NpCJkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aCSUiqPOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OkqgESEhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R70LHWe9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z4gRryTCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 228
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FLenfHdzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 287
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j6fRwEwRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EA1Wb3y4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mg5nWLUOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func noVxVUcGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sbH14QuIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hf7eKYrmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 23
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eQtWqezpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nXunfdfmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EXjUUJReWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func czPs6S44Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5p8ppRLrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wgiyJQlfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 970l02qBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lHKFVzdjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p0kds2n1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KxuOqpShWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 177
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1mCpL3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mu9cJxINWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zgIUhZfFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XdYbDbqDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zz2iDfqgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 17
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5yOTqR0mWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yAyUBwxmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tXluB5EiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ND7L2zbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DMtgRHr1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4cdl3Qo1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GKx4Q3tmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ddCG1j1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NDFTGDb5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FqjIO844Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XWrtMPLLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 235
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sPyCyZPWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYlJoyllWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pzZxdWv9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tpnZmfiLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K7Q6cRBiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OSTO2aOCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 44
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IsqznVDJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QxKYToUjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k5WCXUh7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZEoRCpnTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8HqLHDAAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6842oXU4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zTbTIKlNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Imj4G4a2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UAQ1YiuTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 293
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4gLncieqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w01DNk9iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4HdZuF3DWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MxjApICiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KrLxjLy3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NIz8r4LTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5JTZkvwJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tEBXGj5dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jQOQ7lOcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 165
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RkzujTidWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 62
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EkTL0CMxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xrbrt6m1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OzIfMk1aWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4Zok0sKbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VNvwU48jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dkYY3I8IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lx2RWaJHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nsarBS1yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o5F02STrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZNaA306OWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g0B4jWaBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XsQSFL1kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2LSwdazlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tg3wjRAYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WaqPzX2fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2IELK9gFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eoH2wuQyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yYP3a3hQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mLgbPBTrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J8VyKeEtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SG9yq1LmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 11
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3HDOTzwGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F7C1MBr7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 176
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jIY4OMR4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bXH7qXLKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2yZYUdJLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 155
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1X3vC1VYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MlYyeOwpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dwfITEaoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 245
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AezVPl66Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JAzLE58vWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eLWeMCeiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5HAj16hHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6hc6rEgPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DbkVii0jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wtg2Ud6fWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nss12PydWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RJVhyvpEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qmoEknCdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DyVU0AFpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mOMnVRUEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lt1LBbuAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xF1SiQBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zYEGMdNBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 162
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FfNeNlifWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SevzqI1IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 259
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JRVG2xDJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 25Zd2KMOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1hK7eEjpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 19 + 86
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func JobyMjMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 30 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pe6F3YT1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 21
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func avkDDt2ZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4IsqdUjuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uXvzfDOMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bEPqK8VHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4p2aQqMLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pe9OojMaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fa8iuQEVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NEQfOSfbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func K5ldvcSXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 109
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ONQaLXNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oFzjWCRgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jszfE5zNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ujPkLgGbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lev6v7meWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xFqRV1s0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kxn7iPl3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Mh8lZcTHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w2GQZZbSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 196
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mXeOAx69Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 64Da9RkXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UlFIWG8xWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ODHrluoGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 30MzR9w7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 9 + 163
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TE1ByQUTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3ad6PPbuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YCw4pLjUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 41
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cghyhokwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z2Yxe1qjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 145
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M8Y4tPpdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AToqL98HWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 118
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jXHIOAPQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 234
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BpvMFEvnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fu6CcBPSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 117
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kzkbekcIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yqCXQbJqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 116
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tpdQAsGIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 236
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PY4y0zgqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gpFfogCNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CkM5yRkoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 36
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DphdfDZFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1tJZrxZEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LfvDfHekWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GXlG31xHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gyfNpAv1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 66aqD0VWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LfiFAKz9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IkYoPatsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NDfVnuZOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CBtBGvdwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 136
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rsB7h4AOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func d2V0Z2cDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 90
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ju16RSvAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KipRrhrRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c0rLD9mhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w204Tmj7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 120
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func morjNkTXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 255
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UbvlIYXOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gu4vygMeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 264
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jIVVwewdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 299
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B6MsMkZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nArXhauRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U4V6rwMkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WYOQM3IJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3gTtJbl7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 246
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KqWjFQQAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eO99L0XgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func r6ag6SGoWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yvbzk3zQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jgzTBFTFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AAT9WUW8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3GQOyPjvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oJmTuYEAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 71
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 80yAdEpxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 146
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BI9nDFbAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 24
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gUgbDCxPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vDaamfLvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I3YnED2uWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 79
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U0iDYnggWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func STX12UF3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 149
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func saHoqWcuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 13
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uDHMM2o9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fDp4wkGaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IFCFxpFCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3pcHxRB8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7C6Ib4IPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XWTn2a5hWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kAzRyYL7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cMY3eY8kWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OiNXXnA1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 25 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eo6J7dcQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 141
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nupLIGoCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 64
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f7FmYrGGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p4T6jbf0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 248
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aneUfUHpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BzBO5XWQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 290
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6E82bolmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uPbjl3vQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 33 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func h420JzGTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vQIeQgvfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 110
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func tKLbmXfqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ORO4IrpOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 27
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BtfZN6BZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HoSc2EhPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 57
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZT4WdLC1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 18 + 112
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jWu2dgZYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 108
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Gzk80xCaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jkHQ2goZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 257
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hp0Ez5rkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QRE0fTrWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qy1Q8V0NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 270
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func csIPEzfBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Zod6kTUUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 158
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KxK1EekzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func c9GLhxYgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 291
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MVZszWEAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func msiG83AqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 107
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func E4tFMjvGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 278
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yZF9ihj2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 221
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MhPis5VNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 193
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func V3g2k1U9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uev289XZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 187
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SH9K1IJPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2dhpff0eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bHZHqHPgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 159
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RBXoSaTNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rQsN81O2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cgrlyek5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 58
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wzOFewxZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nzyw5Uf2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uYoqZgbDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YDbhSNToWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 143
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func publVmi2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DeZA4KveWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 8 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 9tOhUOhrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 89 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func C77J0lJ5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y8LTrXb3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AHrWLTmsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 172
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yP3J7N2wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 74 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nl9oM5hDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gKzdgFAHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func naxfFcVyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 205
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 12STEaweWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 60
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8xIWbHefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KsdjlHVpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yjcmdpa3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 160
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Glfnmv3iWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 78
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dNrdIdb1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 129
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BEFDkXqLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i2iVnwtNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 132
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYr9oYTzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 161
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aifuo9P8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qATbLlSXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RSkyG3FjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 102
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5QCXU29VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 239
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x9TFwOugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TmI1g3nEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Vl90iHZXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 50
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LHAoPZtiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 170
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Xcsggc8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 142
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5YJEnRCkWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func veB8m5X4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ksGQfVKeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CLV7zRqPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b3tcMBbOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jm5bbQo5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func S86eeJMcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 124
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Wwm1JCMlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HSnowiMeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NRQU4VwnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PpbM4DpuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 119
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Eg3Z4QW9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 56
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0ReEiXIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 144
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lDzLDPqZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 211
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func yvO7vZpdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func x14exaLSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 297
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func POonpxGsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 213
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oDnxCcDUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 64 + 168
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func D6R6PC78Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 10
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k6iGbwplWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ztMbHpmyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 19
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eorhoJugWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LcsXWTTDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PBBwLV5NWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cD0JEcKaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z0Pgh5F3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8POy5hLfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4TItHAijWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pcJ2intyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lk9CvmPyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 70 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GxOZNk7eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 151
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FocAIRSQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 150
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fcDNLHNeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aHTDPX0pWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 40
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HD2a4mIpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 127
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Lbvt4yJUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xDeGeBpTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pISckC7cWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sij4KqHBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SEVfp07zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 184
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qqvsjIWIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func iPCs1JhAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func SHq4KEYZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 37 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ttk5R0p8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ncaXXrfhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 84
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nnC7tP23Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Kkd82KdrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 7 + 53
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YQgyXSt5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 199
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xVP9aEbyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ppPDPBReWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KStLdBzBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 269
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kDQrHxtpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EGfLQnAPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 45
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func teGdBQ89Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Fsz7jXRWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func m64V0SkzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 35
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1GmD7Zo6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func k4s9WoeBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func evD5THaeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 288
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func f6CIVwibWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ny71XcvWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 173
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func elH9NG4VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 57 + 229
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XIn7BmqiWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 262
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PYhSaE84Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 247
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func asA2had1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 51
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6gCFP1swWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 254
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func lvHh92YbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func e0iP3bh1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MeHsBXblWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 214
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YvSR91wnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func R3wwNY2dWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jcuo2PiKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 80
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Su3cQYbvWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 175
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func M9oh7HDAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 88 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gfhZEJd4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func zRhOqGRVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dVgNtMbDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 201
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CkmC7zdaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 219
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func v1lw38H2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y810XKjtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VM28dMhHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 13 + 267
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func p01E0GMdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 32
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func stSPgjJYWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xiW5atw6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func kq9GSIiRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 96
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fIgKFo39Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 197
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KavhSeJrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 230
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func wQepH9ZLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 99
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func VsMBBxFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 191
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Z3Au2zc6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 128
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5L1QuzruWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 27 + 208
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func TqHFwoozWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WgzGdAtSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func U2aAnsHpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6nCanjjGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CgjvcfUdWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 65
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cPNWLuocWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fWFxjbeMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 34
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qp6c7DQlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func BpZ0GIGNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 185
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4ckJKssgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 209
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y2oThHRCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 10 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2TNDKqYGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 198
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ay4Dd9anWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 53 + 91
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y352cqmMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J59hqhNGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func I8eF8Vi2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 66 + 200
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AbkOGucxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0loHmEM8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 43 + 67
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eBNdowB3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 169
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func be3wgKPLWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 273
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0O0KI465Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 268
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gLFCuneHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 192
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func mGGXSn1lWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 32 + 74
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Q79LZ9VPWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 77 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bM7MtGYNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 294
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func PWoQjSLaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 125
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func pwUGG88UWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 215
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func YjzaSKcTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 166
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jqqvOkQWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fML35BVIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 69
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func AWfUhjcCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 3 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HXDjX8cIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func X8iI0rAEWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 36 + 225
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func KQpHU23jWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 79 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ySTptk1FWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 38 + 77
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func o9W0puCQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 34 + 20
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uq9kKLRBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 232
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5lJdYRB9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 220
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func oGQOAJmQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 63 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nIb4pSpyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 85 + 289
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sDi0Tb7wWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 3WnSiywQWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 296
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vB5ubNAgWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 204
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 2H5WGFr8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 5AxCKOBxWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dcnpD3c7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 67 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g2xImnHUWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 275
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HlZum5wOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 241
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vXMY8p2gWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 90 + 104
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func snKJ3kenWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 73
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 04RTQbqOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 33
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func XCHfJw63Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 231
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func hvE4WFsDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 76
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Tkai2uVqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 6 + 31
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 59IKXBcXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 69 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rBhJjJdBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 253
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func cqH3SBJwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 154
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WzcCl536Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 179
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 93AzvdItWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 82 + 39
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nUdUxEh1Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 84 + 68
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func B0l7eMF9Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 188
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func rCpt081qWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 52
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HhPGPKJyWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 92
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z1WWw6SAWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 15 + 87
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xi408r9yWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 5 + 138
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func fW1GtA0CWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 195
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EDGcx8mRWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func b6JPhelfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 72 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gtyEfPxzWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 11 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xHnR43CbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func FYolsMzwWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 30
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Hc0EWCVrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 180
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DvYDeh48Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 24 + 83
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LoknLlqnWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 47 + 152
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A30DwW3VWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 76 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DGVUGryVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 249
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j6oHGXCHWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 71 + 210
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func J8Wd4NNcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 54 + 216
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DpHXHI5IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 186
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HG4aAELJWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 73 + 271
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func boLlxfuqWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 223
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ah90B8XSWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 171
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func i2ybX3C3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 237
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dkgOVfSKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 68 + 164
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func z3zlPMr2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 60 + 133
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Uo0JJOoGWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 233
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 0QyBOFK2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 83 + 190
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func W0rdhwCsWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 25
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func F32JR3O8Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 48 + 212
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gVbbCWy2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 250
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CG2UiOBXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 131
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func nDoejZbfWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 97
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func CaHiu2oBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 103
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 403TFhoeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 20 + 88
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Y4nt4s52Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 202
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func l5hYhKDDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 51 + 148
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1Sr3ryNhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 182
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func g56zq6HpWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 17 + 240
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bN4uJtN0Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 300
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func w2EwsKOOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 44 + 285
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func LZ2CXKatWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 178
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func A5yKFzE2Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 98
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func OeRRnFyDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 75 + 94
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func jEF3ZOFtWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 14 + 224
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4YPN9KcmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 46 + 292
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func gEtLKERVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 59 + 298
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IBWZTezNWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 45 + 49
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func RJ27Dq3oWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 62 + 147
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func id6VHS0TWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 15
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func aACGCra5Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 137
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 8NxRJURbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 272
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MUjyQ2ReWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 16 + 38
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ZPhcrNKKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 183
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bPagGZ7zWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 29 + 42
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 6mhUe9rcWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 42 + 140
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func ibJOx9y4Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 274
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 7Hu7yn2eWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 39 + 206
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func IgxmFGyDWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Nvh3ucdMWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 218
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 4T9Z0Or3Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 40 + 70
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func NInKR7aaWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 21 + 167
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func bZ26jgL6Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 48
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func qeOcnzGeWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 26 + 114
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xrCLMWTBWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 78 + 93
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func QEw2UzMXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 41 + 276
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func dqCdrp0BWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 4 + 12
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func EvRxEsYmWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 49 + 156
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func HxN599jbWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 81 + 284
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func UZb9IJMFWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 28 + 126
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xzW1dhR7Worker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 58 + 283
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func eNah37IIWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 12 + 243
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func GMDy8PpWWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 113
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func s9ciWlJjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 189
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1u2pV3jhWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 52 + 174
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func MOMjdQqlWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 47
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Xe0HKqefWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 22 + 22
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Pueuf7XuWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 50 + 222
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func Ch4RvISKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 61 + 122
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func uc67KDzZWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 87 + 244
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func 1U5GFvKCWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 295
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func j8yd1XANWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 31 + 46
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xX0liFsXWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 80 + 82
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func vWlA4eBTWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 86 + 260
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func DsjzWV0IWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 55 + 135
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func WyXFpbXKWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 35 + 101
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xbCh5WvOWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 2 + 251
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func sBBpdTtrWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 65 + 203
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func xWP8qdEjWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 56 + 54
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

func t7LyG3kVWorker(wg *sync.WaitGroup, id int, dataChan <-chan int) {
    defer wg.Done()
    for val := range dataChan {
        result := val * 23 + 226
        fmt.Printf("worker %d → %d\n", id, result)
    }
}

