function transition__intro_main() {
    console.log('intro --> main')

    document.querySelector('.intro').classList.add('intro_hide')
    document.querySelector('.main').classList.add('main_show')
    setTimeout(() => {
        let el = document.querySelector(".tabs")
        let instance = M.Tabs.init(el)
    }, 100)
}
function transition__main_print_block() {
    console.log('main --> print-block')

    document.querySelector('.main').classList.remove('main_show')
    document.querySelector('.print-block').classList.add('print-block_show')
}
function transition__to_intro() {
    console.log('main/print-block --> intro')

    document.querySelector('.intro').classList.remove('intro_hide')
    document.querySelector('.main').classList.remove('main_show')
    document.querySelector('.print-block').classList.remove('print-block_show')
}
