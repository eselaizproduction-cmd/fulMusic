navigate(2)
            } else {
                navigate(Math.max(0, currentPage - 1))
            }
        }
        
        function goForward() {
            navigate(Math.min(3, currentPage + 1))
        }
        
        function toggleNotifications() {
            showToast('Новых уведомлений нет. Ты самый крутой автор ❤️')
        }
        
        function showProfileMenu() {
            showToast('Ты — Артур, и это твой личный музыкальный мир.<br>Всё, что ты добавишь здесь — увидят твои слушатели.')
        }
        
        // ==================== START APP ====================
        function startApp() {
            initTailwind()
            loadInitialData()
            renderSidebarPlaylists()
            initAudio()
            navigate(0)
            
            console.log('%c🚀 ECHO • АртФлоу загружено идеально. Это не просто сайт — это твоё приложение. Наслаждайся, Артур!', 'color:#a78bfa; font-size:13px')
            console.log('Пароль для панели автора: artur2026 (измени в коде на свой)')
            
            // Авто-сохранение каждые 30 сек
            setInterval(saveData, 30000)
            
            // PWA hint
            console.log('💡 Чтобы превратить в настоящее приложение: залей файл на Vercel — получишь installable PWA за 10 секунд.')
        }
        
        window.onload = startApp
    </script>
</body>
</html>
`
