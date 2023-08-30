# haunted-house2023
お化け屋敷 2023 です

<br>





## Arduino/Raspi班

#### 基本資料

1. [PC + Python](https://knock-down-python.stradty.com/)

2. [Arduino + Raspi](https://arduinobook.stradty.com/accounts/)

<br>

## Web班

Webページ確認のためには下記コマンドを実行後に

[http://127.0..0.1:8080](http://127.0..0.1:8080)にアクセスして下さい。

でも開発中は[VSCode](https://code.visualstudio.com/docs/languages/html)の[拡張機能](https://webdesign-trends.net/entry/14461)を使ったほが楽です。

<br>

完成後は [GitHub Pages](https://docs.github.com/ja/pages/getting-started-with-github-pages/about-github-pages) で公開予定


<br>

```bash
$ cd ./src/webpage/pages      # 移動

$ python -m http.server 8080  # Webサーバ起動

```

<br>

#### Web参考資料 (HTML・CSSなどの参考文献)

- [https://www.tohoho-web.com/wwwbeg.htm](https://www.tohoho-web.com/wwwbeg.htm)

- [https://saruwakakun.com/html-css/basic](https://www.tohoho-web.com/wwwbeg.htm)

- [https://ja.javascript.info/](https://www.tohoho-web.com/wwwbeg.htm)

- [https://typescriptbook.jp/](https://www.tohoho-web.com/wwwbeg.htm)

<br>

## Note ディレクトリ構成

- Web班にはサンプルファイルを用意しておきました

<br>

```bash
.
├── README.md
└── src
    ├── arduino               # Arduino/Raspi班用1
    ├── raspi                 # Arduino/Raspi班用1
    └── webpage               # Web班用
        ├── pages             # HTML
        │   └── index.html
        └── static            # 画像とかCSSとか
            └── css
                └── main.css

```

<br>

## Author


* 高専祭お化け屋敷 電子技術班2023
* NITTC
