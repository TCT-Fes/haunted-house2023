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

[http://127.0.0.1:8080](http://127.0.0.1:8080)にアクセスして下さい。

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

- [https://developer.mozilla.org/ja/docs/Web](https://developer.mozilla.org/ja/docs/Web)

- [https://jsprimer.net/](https://jsprimer.net/)

- [https://typescriptbook.jp/](https://typescriptbook.jp/)

<br>

#### 気をつけること

- CSSは[フレームワーク](https://imitsu.jp/matome/hp-design/9228371374809274)に乗っかったほうがいいです
- [レスポンシブデザイン](zhttps://www.google.com/search?q=%E3%83%AC%E3%82%B9%E3%83%9D%E3%83%B3%E3%82%B7%E3%83%96%E3%83%87%E3%82%B6%E3%82%A4%E3%83%B3&sca_esv=561214195&sxsrf=AB5stBjTyB9OncPtFzKX30ewwEcx2Ar3aA%3A1693369951818&source=hp&ei=X8buZID2L46voATyxrDYCQ&iflsig=AD69kcEAAAAAZO7UbysIjemDkHGuRkcwMHjWulB9uurJ&ved=0ahUKEwjAoczTxoOBAxWOF4gKHXIjDJsQ4dUDCAs&uact=5&oq=%E3%83%AC%E3%82%B9%E3%83%9D%E3%83%B3%E3%82%B7%E3%83%96%E3%83%87%E3%82%B6%E3%82%A4%E3%83%B3&gs_lp=Egdnd3Mtd2l6Ih7jg6zjgrnjg53jg7Pjgrfjg5bjg4fjgrbjgqTjg7MyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgAQyBxAAGAQYgARIlx1QAFjCGnAAeACQAQCYAXmgAZYPqgEEMTYuNLgBA8gBAPgBAcICDRAAGAQYgAQYsQMYgwHCAgYQABgDGATCAgoQABgEGIAEGLED&sclient=gws-wiz)に気をつけましょう

<br>

## Note ディレクトリ構成

- Web班にはサンプルファイルを用意しておきました

- トップページは `index.html` にしましょう
- cssや画像は webpage/static の中に入れましょう

<br>

```bash
.
├── README.md
└── src
    ├── arduino          # Arduino/Raspi班用1
    │   └── test.ino
    ├── raspi            # Arduino/Raspi班用2
    │   └── test.py
    └── webpage
        ├── html            # HTML
        │   └── index.html
        └── static          # 画像とかCSSとか
            ├── css
            │   └── main.css
            └── img
```

<br>

## Author


* 高専祭お化け屋敷 電子技術班2023
* NITTC
